#include<iostream>
using namespace std;

/*
Constructor
-----------
Constructor is an special type of member function of a class.
constructor is automatically called when we create object of the class.
constructor can be overloaded because constructor can take multiple values.
Constructor always declared in publicly.
Constructor never return any value.
Constructor name always be same as the class name in the program.
Constructor never define with any data type.
Constructor can never be inheritate by derived class.

There is three type of constructor in C++

1. Default Constructor
2. Parameterized Constructor
3. Copy Constructor


1. Default Constructor
----------------------
Default constructor is an first type of constructor which is used to initialize the member variable of the class with user giver value
The most important thing is constructor function automatically called.
*/

class test
{
public:
    int a,b;
    test();// default constructor
    void display_data();
};

test::test()
{
    cout<<"Enter the a and b value : ";
    cin>>a>>b;
}

void test::display_data()
{
    cout<<"The a value : "<<a<<endl;
    cout<<"The b value : "<<b<<endl;
}

int main()
{
    test t;
    t.display_data();
    return 0;
}
