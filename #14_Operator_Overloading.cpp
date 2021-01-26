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
    Complex operator +(Complex c)
    {
        Complex Temp;
        Temp.a = a+c.b;
        Temp.b = b+c.a;
        return Temp;
    }
};

int main()
{
    Complex A,B,C;
    A.setdata(10,20);
    B.setdata(10,20);

    C = A+B;
    C.showdata();
    return 0;
}
