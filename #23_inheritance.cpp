/*
Private
-------
if we specify the private while creating the derived class
then the protected and public member will be access by the derived class.

but in derived class the protected and public member are considered as private member.


Protected
-----------
if we specify the protected while creating the derived class
then the protected and public member will be access by the derived class.

but in derived class the protected and public member are considered as private member.



Public
-----------
if we specify the public while creating the derived class
then the protected and public member will be access by the derived class.

but in derived class the protected and public member are considered as protected and public member.


*/

#include<iostream>
#include<conio.h>
using namespace std;

class A
{
private:
    int a;
public:
    void setval(int x)
    {
        a = x;
    }
    void display1()
    {
        cout<<a;
    }
};

class B:public A
{
public:
    void setdata(int x)
    {
        setval(x);
    }
    void display()
    {
        cout<<"The value is : ";
        display1();
    }
};

int main()
{
    B obj;
    obj.setdata(4);
    obj.display();
}


/*
Output -
---------
Enter the name : Manish Hedau
The name is : Manish Hedau
*/
