/*
Friend Function can become friend of more than one class.
*/

#include<iostream>
using namespace std;

// form declaration
class B;

class A
{
private:
    int a = 10;
public:
    void fun1()
    {
        cout<<"Class A"<<endl;
    }
    friend void fri(A,B);

};

class B
{
private:
    int b = 20;
public:
    void fun2()
    {
        cout<<"Class B"<<endl;
    }

    friend void fri(A,B);
};


void fri(A o1,B o2){

    cout<<"Sum is : "<<o1.a+o2.b<<endl;
}


int main()
{
    A obj1;
    B obj2;
    fri(obj1,obj2);
    return 0;
}
