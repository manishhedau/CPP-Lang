// Operator Overloading
//----------------------

/*
When an Operator is overloaded for multiple jobs, it is known as Operator Overloading.

It's way to implement polymorphism.

There are two type of operator
1. Unary Operator
2. Binary Operator

1. Unary Operator
-----------------

Unary Operator is that where we only need only operands to implement it like.
Ex - Increment , Decrement.
*/

#include<iostream>
using namespace std;

class Complex
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a = x;
        b = y;
    }
    void showdata()
        {
            cout<<"A = "<<a<<" B = "<<b<<endl;
        }

    // predecrement Operator
    Complex operator --()
    {
        Complex Temp;
        Temp.a = --a;
        Temp.b = --b;
        return Temp;
    }

    // Preincrement Operator
    Complex operator ++()
    {
        Complex Temp;
        Temp.a = ++a;
        Temp.b = ++b;
        return Temp;
    }

    // Power Operator
    Complex operator *()
    {
        Complex Temp;
        Temp.a = a*a;
        Temp.b = b*b;
        return Temp;
    }
};

int main()
{
    Complex A,C,B,D;
    A.setdata(10,20);

    C = --A;
    C.showdata();
    B = ++C;
    B.showdata();
    cout<<"\nThe power of the object : "<<endl;
    D = *A;
    D.showdata();
    return 0;
}
