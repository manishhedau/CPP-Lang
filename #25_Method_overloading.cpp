// Method Overloading
// -----------------
/*
    When we create different function with the  same name and with different types of parameters.
    then this concept is called as Method overloading.

    Always remember that the parameter should not be same in other function too.
*/


#include<iostream>
using namespace std;


class One
{
public:
    // no parameter but have the same name
    void display()
    {
        cout<<"The function call !!!"<<endl;
    }

    void display(int a)
    {
        cout<<"The value is A : "<<a<<endl;
    }

    void display(int a,int b)
    {
        cout<<"The value is A and B : "<<a<<" "<<b<<endl;
    }
};

int main()
{
    One obj;
    obj.display(); // no argument function call
    obj.display(1); // function with one argument is called
    obj.display(10,20);// function with two argument is called
    return 0;

}
