#include "main.decl.h"

#include "main.h"
#include "cblasmatmul.decl.h"
#include<stdlib.h>

#define MATRIX_SIZE 250


/* readonly */ CProxy_Main mainProxy;


// Ponto de Inicio da aplicação Charm++
Main::Main(CkArgMsg* msg) {

  // Inicializando as variáveis locais
  doneCount = 0;    // Set doneCount to 0
  numElements = 5;  // Default numElements to 5
  numInstancias = 5; // Numero padrão de instancias (chares)
  
  // Definindo matrizes e seus iteradores
  int matrixA[MATRIX_SIZE][MATRIX_SIZE], matrixB[MATRIX_SIZE][MATRIX_SIZE], i,j; 
  
  // int matrixA[2][2] = {
  //       {1,2},
  //       {3,-1}
  //   };
  // int matrixB[2][3] = {
  //     {1,-2,3},
  //     {2,4,0}
  // };
    
  // A partir do argumento recebido, define-se a quantidade
  //     de instancias a serem executadas de forma paralela
  if (msg->argc > 1){
    numElements = atoi(msg->argv[1]);
    numInstancias = atoi(msg->argv[1]);
  }

  delete msg;

  // Display some info about this execution
  //   for the user.
  CkPrintf("Inicializando calculo de produto de matrizes");
  
  for( i = 0; i < MATRIX_SIZE; ++i){
    for( j = 0;  j < MATRIX_SIZE; ++j){
      matrixA[i][j] = rand();
      matrixB[i][j] = rand();
    }
  }

  // Set the mainProxy readonly to point to a
  //   proxy for the Main chare object (this
  //   chare object).
  mainProxy = thisProxy;

  // Create the array of Hello chare objects.
  CProxy_Cblasmatmul helloArray = CProxy_Cblasmatmul::ckNew(numElements);
  
  CProxy_Cblasmatmul matmulArray = CProxy_Cblasmatmul::ckNew(numInstancias);

  // Invoke the "sayHi()" entry method on all of the
  //   elements in the helloArray array of chare objects.
  helloArray.sayHi(-1);
}


// Constructor needed for chare object migration (ignore for now)
// NOTE: This constructor does not need to appear in the ".ci" file
Main::Main(CkMigrateMessage* msg) { }


// When called, the "done()" entry method will cause the program
//   to exit.
void Main::done() {

  // Increment the doneCount.  If all of the Hello chare
  //   objects have indicated that they are done, then exit.
  //   Otherwise, continue waiting for the Hello chare objects.
  doneCount++;
  if (doneCount >= numInstancias)
    CkExit();
}


#include "main.def.h"
