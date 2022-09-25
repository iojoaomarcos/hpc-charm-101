#include "main.decl.h"
#include "cblas.h"
#include "main.h"

class Main : public CBase_Main {
    int matrixA[2][2] = {
        {1,2},
        {3,-1}
    };
    int matrixB[2][3] = {
        {1,-2,3},
        {2,4,0}
    };
    
    public:
        Main(CkArgMsg* m){
            CkPrintf("MatrixA %u", matrixA[0][1]);
            CkPrintf("Valor Recebido %s", m);
        }
};

#include "main.def.h"