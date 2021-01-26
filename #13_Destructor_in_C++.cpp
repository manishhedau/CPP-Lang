#include<iostream>
using namespace std;

/*
1. Destructor
---------------
Destructor is an special instance member function of the class.
The name of the destructor is same as the name of the class but preceded by tilde(~).
Destructor never can be static
Destructor has no return type.
Destructor take no argument
And no overloading is possible.

It is invoked implicitly when object is going to destroyed.
Means that the scope of the object is end then destructor is called/invoke.

Why Destructor ?
---------------
It allocated be defined to release resources allocated to an object.

*/

class test
{
public:
    int a,b;
    test(int x, int y);// Parameterized constructor
    test(test &t); // copy constructor
    ~test();
    void display_data();
};

test::test(int x, int y)
{
    a = x;
    b = y;
}

test::test(test &t)
{
    a = t.a;
    b = t.b;
}
test::~test()
{
    cout<<"Now the program work is complete \n\n\t\t\t PROGRAM END"<<endl;
}
void test::display_data()
{
    cout<<"The a value : "<<a<<endl;
    cout<<"The b value : "<<b<<endl;
}

int main()
{
    cout<<"Parameterized constructor value:\n"<<endl;
    test t1(5,6); // calling Parameterized Constructor
    t1.display_data();
    cout<<"\nCopy constructor values :\n"<<endl;
    test t2(t1); // Copy Constructor
    t2.display_data();
    return 0;
}
