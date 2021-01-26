#include<iostream>
using namespace std;

/*
2. Copy Constructor
----------------------
Copy constructor is used to pass the one object value to another object.
It also automatically called when we create the object of the class.

In case when you are creating the object for the parameterized constructor
at that time don't use the Explicit way to pass the argument to para constructor
otherwise it didn't work and program will you an error.

class test
{
public:
    int a,b;
    test(int x, int y);// Parameterized constructor
    test(test &t); // copy constructor
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
    cout<<"Copy constructor values :\n"<<endl;
    test t2(t1); // Copy Constructor
    t2.display_data();
    cout<<"The values of t1,t2 object are same because we create the copy constructor and copy constructor pass one object value \n into another object.."<<endl;
    return 0;
}
