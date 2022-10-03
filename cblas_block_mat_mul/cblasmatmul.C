#include "cblasmatmul.decl.h"

#include "cblasmatmul.h"
#include "main.decl.h"


extern /* readonly */ CProxy_Main mainProxy;


void Cblasmatmul::set(int col, int row, double v){
    //data[col + row * dimension] = v;
    data_row[row + col * dimension] = v;
    data_col[col + row * dimension] = v;
}

/*double Cblasmatmul::get(int col, int row) {
    return data[col + row * dimension];
}*/

double Cblasmatmul::get_row(int col, int row) {
    return data_row[row + col * dimension];
}

double Cblasmatmul::get_col(int col, int row) {
    return data_col[col + row * dimension];
}

void Cblasmatmul::MOV(Cblasmatmul& dest, Cblasmatmul& src) {
    for(int i = 0; i < dest.dimension * dest.dimension; i++) {
        //dest.data[i] = src.data[i];
        dest.data_col[i] = src.data_col[i];
        dest.data_row[i] = src.data_row[i];
    }
}

void Cblasmatmul::MUL(Cblasmatmul &dest, Cblasmatmul &src1, Cblasmatmul &src2) {
    int dim = dest.dimension;
    Cblasmatmul *tmp = new Cblasmatmul(dest.dimension);

    int blockSize = 200;

    for (int row = 0; row < dim; row += blockSize) {
        for (int col = 0; col < dim; col += blockSize) {

            for(int block_row = row; block_row < row + blockSize; block_row++) {
                for(int block_col = col; block_col < col + blockSize; block_col++) {
                    double result = 0.0;

                    //Compute dot product
                    for (int dot = 0; dot < dim; dot++) {
                        //result += src1.get(dot, row) * src2.get(col, dot);
                        //result += src1.get_col(dot, row) * src2.get_row(col, dot);
                        result += src1.get_col(dot, block_row) * src2.get_row(block_col, dot);
                    }
                    //tmp->set(col, row, result);
                    tmp->set(block_col, block_row, result);
                }
            }
        }
    }
    //Move tmp into dest
    Cblasmatmul::MOV(dest, *tmp);
    delete tmp;
}


Cblasmatmul::Cblasmatmul() {
  // Nothing to do when the cblasmatmul chare object is created.
  //   This is where member variables would be initialized
  //   just like in a C++ class constructor.
}


// Constructor needed for chare object migration (ignore for now)
// NOTE: This constructor does not need to appear in the ".ci" file
Cblasmatmul::Cblasmatmul(CkMigrateMessage *msg) { }


void Cblasmatmul ::sayHi(int from) {

  // Have this chare object say cblasmatmul to the user.
  CkPrintf("\"cblasmatmul\" from cblasmatmul chare # %d on "
           "processor %d (told by %d).\n",
           thisIndex, CkMyPe(), from);

  // Report to the Main chare object that this chare object
  //   has completed its task.
  mainProxy.done();
}

void Cblasmatmul ::calculate(int CblasmatmulSize, int* CblasmatmulA, int* CblasmatmulB) {
    
  }


#include "cblasmatmul.def.h"
