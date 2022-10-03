#include "matmul.decl.h"
#include "rand48_replacement.h"
#include "cblas.h"

CProxy_Main mainProxy;

void blas_blocked_kij_algorithm(int n, int cacheBlock, double* a, double* b,
        double* result) {
    int k, i, j;
    double first = 1.0, second = 1.0;
    for (k = 0; k < n / cacheBlock; k++) {
        for (i = 0; i < n / cacheBlock; i++) {
            double* block = &a[(n * cacheBlock * i) + (cacheBlock * k)];
            for (j = 0; j < n / cacheBlock; j++) {
                cblas_dgemm(CblasRowMajor, CblasNoTrans,
                        CblasNoTrans,
                        cacheBlock, cacheBlock, cacheBlock,
                        first, block,
                        n, &b[(n * cacheBlock * k) + (cacheBlock * j)],
                        n, second,
                        &result[(n * cacheBlock * i) + (cacheBlock * j)],
                        n);
            }
        }
    }
  //Prints go here

}

void example_dgemm(int M, int N, int K, double alpha,
                  double *A, double *B, double *C) {
  // for (int i = 0; i < M; ++i) {
  //   for (int j = 0; j < N; ++j) {
  //     double sum = 0.0;
  //     for (int k = 0; k < K; ++k) {
  //       sum += A[i*K + k] * B[k*N + j];
  //     }
  //     C[N*i + j] = C[N*i + j] + alpha*sum;
      
  //   }
  // }
  
  cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans, M, N, K, alpha, A, M, B, K, 0.001, C, M);
}

/*
  Ponto de entrada da aplicação Charm++
*/
class Main : public CBase_Main {
  double startTime;
  unsigned int blockSize, numBlocks;
  CProxy_Block a, b, c;
public:
  Main(CkArgMsg* m) {
    if (m->argc > 2) {
      blockSize = atoi(m->argv[1]);
      numBlocks = atoi(m->argv[2]);
    } else {
      CkPrintf("Usage: matmul blockSize numBlocks");
      CkExit(1);
    }

    mainProxy = thisProxy;

    a = CProxy_Block::ckNew(true, blockSize, numBlocks, numBlocks, numBlocks);
    b = CProxy_Block::ckNew(true, blockSize, numBlocks, numBlocks, numBlocks);
    c = CProxy_Block::ckNew(false, blockSize, numBlocks, numBlocks, numBlocks);

    startTime = CkWallTimer();

    a.pdgemmSendInput(c, true);
    b.pdgemmSendInput(c, false);
    c.pdgemmRun(1.0, CkCallback(CkReductionTarget(Main, done), thisProxy));
  }

  void done() {
    double endTime = CkWallTimer();
    CkPrintf("Matrix multiply of %u blocks with %u elements each (%u^2) finished in %f seconds\n", 
             numBlocks, blockSize, numBlocks*blockSize, endTime - startTime);
    CkExit();
  }
};

class Block : public CBase_Block {
  unsigned int blockSize, numBlocks, block;
  double* data;
  unsigned int elems;
  Block_SDAG_CODE
  public:
  Block(bool randomInit, unsigned int blockSize_, unsigned int numBlocks_)
    : blockSize(blockSize_), numBlocks(numBlocks_)
  {
    elems = blockSize * blockSize;
    data = new double[elems];
    if(randomInit)
      for (int i = 0; i < elems; ++i)
        data[i] = drand48();
    else
      for (int i = 0; i < elems; ++i)
        data[i] = 0;

  }

  Block(CkMigrateMessage*) {}

};

#include "matmul.def.h"
