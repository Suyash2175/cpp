#include <iostream>
#include <cmath>

#include "myComplex.hpp"

using namespace std;

myComplex::myComplex() : real(0), img(0) {}

void myComplex::print()
{
    cout << real << "+" << img << "i" << endl;
}

void myComplex::add(myComplex c1, myComplex c2)
{
    real = c1.real + c2.real;
    img = c1.img + c2.img;
}

void myComplex::sub(myComplex c1, myComplex c2)
{
    real = c1.real - c2.real;
    img = c1.img - c2.img;
}
void myComplex::mult(myComplex c1, myComplex c2)
{
    real = c1.real * c2.real - c1.img * c2.img;
    img = c1.real * c2.img + c1.img * c2.real;
}
void myComplex::conjugate(myComplex c1, myComplex c2)
{

    if (img < 0)
    {
        cout << c1.real << "+" << -c1.img << "i" << endl;
        cout << c2.real << "+" << -c2.img << "i" << endl;
    }
    else
    {
        cout << c1.real << "-" << c1.img << "i" << endl;
        cout << c2.real << "-" << c2.img << "i" << endl;
    }
}
void myComplex::magnitude(myComplex c1, myComplex c2)
{
    cout << sqrt(c1.real * c1.real + c1.img * c1.img) << endl;
    cout << sqrt(c2.real * c2.real + c2.img * c2.img) << endl;
}
void myComplex::div(myComplex c1, myComplex c2)
{
    cout << (c1.real * c2.real + c1.img * c2.img) / (c2.real * c2.real + c2.img * c2.img);
    cout << (c1.real * c2.img + c1.img * c2.real) / (c2.real * c2.real + c2.img * c2.img);
}
