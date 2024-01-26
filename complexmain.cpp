#include<iostream>
#include<cmath>
#include "myComplex.hpp"
using namespace std;


int main()
{
    myComplex c1,c2,c3,c4,c5,c6,c7,c8;

    c1.print();

    c1.real=10;
    c1.img=20;

    cout<<"first complex:"<<endl;
    c1.print();
    cout<<endl;

    c2.real=23;
    c2.img=12;

    cout<<"second complex:"<<endl;
    c2.print();
    cout<<endl;

    
    cout<<"addition:"<<endl;
    c3.add(c1,c2);
    c3.print();
    cout<<endl;

    
    cout<<"subtraction:"<<endl;
    c4.sub(c1,c2);
    c4.print();
    cout<<endl;

    cout<<"multiplication:"<<endl;
    c5.mult(c1,c2);
    c5.print();
    cout<<endl;

    cout<<"conjugate:"<<endl;
    c6.conjugate(c1,c2);
    //c6.print();
    cout<<endl;

    cout<<"magnitude:"<<endl;
    c7.magnitude(c1,c2);
    //c7.print();
    cout<<endl;

    cout<<"division:"<<endl;
    c8.div(c1,c2);
    cout<<endl;







    return 0;
}
