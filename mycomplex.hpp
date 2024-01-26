//class is a template

class myComplex
{
    public:
    double real;
    double img;
    
    //Default constructor
    myComplex();
    
    //function to print complex numbers
    void print();
    //function to add complex numbers
    void add(myComplex, myComplex);
    //function to subtract complex numbers
    void sub(myComplex, myComplex);
    //function to multiply complex numbers
    void mult(myComplex, myComplex);
    //function to conjugate complex numbers
    void conjugate(myComplex,myComplex);
    //function to find magitude of complex numbers
    void magnitude(myComplex,myComplex);
    //funtion to divide complex numbers
    void div(myComplex,myComplex);
};
