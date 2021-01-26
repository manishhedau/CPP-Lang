#include<iostream>
#include<conio.h>
using namespace std;
class A
{
private:
    int a;
    int b;
public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void displayData()
    {
        cout<<"A = "<<a<<endl;
        cout<<"B = "<<b<<endl;
    }
    int add()
    {
        return (a + b);

    }
};

class B:public A
{
public:

    void displayAdd()
    {
        cout<<"The Addition of A and B : "<<A::add()<<endl;
    }
};
int main(){
    int x,y;
    B b;
    cout<<"Enter two number which you want to add !"<<endl;
    cout<<"Enter first number : ";
    cin>>x;
    cout<<"Enter second Number : ";
    cin>>y;
    system("cls");
    b.setdata(x,y);
    b.displayData();
    b.add();
    b.displayAdd();
    getch();
    return 0;

}
