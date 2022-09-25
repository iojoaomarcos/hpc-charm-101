#ifndef __CBLASMATMUL__
#define __CBLASMATMUL__


class Cblasmatmul : public CBase_Cblasmatmul {

 public:

  /// Constructors ///
  Cblasmatmul();
  Cblasmatmul(CkMigrateMessage *msg);

  /// Entry Methods ///
  void sayHi(int from);

};


#endif //__HELLO_H__
