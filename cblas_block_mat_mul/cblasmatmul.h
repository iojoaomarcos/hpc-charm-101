#ifndef __CBLASMATMUL__
#define __CBLASMATMUL__


class Cblasmatmul : public CBase_Cblasmatmul {
 
 double* data_row;
    double* data_col;
    int dimension;

 public:

  /// Constructors ///
  Cblasmatmul();
  Cblasmatmul(CkMigrateMessage *msg);

  /// Entry Methods ///
  void sayHi(int from);
  void calculate(int matrixSize, int* matrixA, int* matrixB);
  
  //Constructor creates a square Matrix of size dimention x dimention
    Cblasmatmul(int dimension) {
        this->dimension = dimension;
        //data = new double[dimension * dimension];
        data_col = new double[dimension * dimension];
        data_row = new double[dimension * dimension];
    }
    //Destructor
    ~Cblasmatmul(){
        //delete[] data;
        delete[] data_col;
        delete[] data_row;
    }

    //Set the value of an element
    void set(int col, int row, double v);

    //The value of an element
    double get(int col, int row);

    double get_row(int col, int row);

    double get_col(int col, int row);

    //Moves values of src into dest
    static void MOV(Cblasmatmul& dest, Cblasmatmul& src);

    //Multiply src1 & src2, store the result in dest
    static void MUL(Cblasmatmul& dest, Cblasmatmul& src1, Cblasmatmul& src2);

};


#endif //__HELLO_H__
