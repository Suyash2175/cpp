#include<iostream>
using namespace std;

class myComplex
{
    public:
    double real;
    double img;
    myComplex()
    {
       cout<<"\n in constructor";
       real=10;
       img=20;
    }
    //to print complex numbers
    void print()
    {
       cout<<"\n real::"<<real<<"\t img::"<<img<<endl;
    }
};
int main()
{
    myComplex c1;
    c1.print();
    c1.real=10;
    c1.img=20;
    //myComplex c2,c3,c4;
    //cout<<"\n c1.real::"<<c1.real<<"\t c1.img::"<<c1.img<<endl;
    //myComplex c2();
    return 0;
}
