#include "cblasmatmul.decl.h"

#include "cblasmatmul.h"
#include "main.decl.h"


extern /* readonly */ CProxy_Main mainProxy;


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


#include "cblasmatmul.def.h"
