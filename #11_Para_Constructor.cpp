#include<iostream>
using namespace std;

/*
2. Parameterized Constructor
----------------------
The parameterized Constructor is used to initialize the variable with user given values.
But it parameter like any function.
Parameter constructor or any type of constructor is automatically called when we create object
It also defined as the class name with some parameter.

One more important thing is that we can pass value to constructor by using two ways

1. By calling the constructor Explicitly

    Class_name object_name = class_name(arguments);

2. By calling the constructor Implicitly

    Class_name object_name(arguments);
*/

class test
{
public:
    int a,b;
    test(int x, int y);// Parameterized constructor
    void display_data();
};

test::test(int x, int y)
{
    a = x;
    b = y;
}

void test::display_data()
{
    cout<<"The a value : "<<a<<endl;
    cout<<"The b value : "<<b<<endl;
}

int main()
{
    cout<<"Explicitly called value :\n"<<endl;
    test t1 = test(5,6);
    t1.display_data();
    cout<<"Explicitly called value :\n"<<endl;
    test t2(20,35);
    t2.display_data();
    return 0;
}
