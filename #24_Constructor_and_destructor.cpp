// constructor and destructor in inheritance


#include<iostream>
using namespace std;

class A
{
public:
    A()
    {

    }
    ~A()
    {

    }
};

class B: public A
{
public:
    // here the parent class constructor execute first and then child class constructor.
    B():A()
    {

    }

    // in case of destructor child class destructor execute first and then automatically parent class
    // destructor execute
    ~B()
    {

    }



};


int main()
{
    B obj;

    return 0;
}
