// Operator overloading using friend function

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
    friend Complex operator +(Complex,Complex);
};
Complex operator +(Complex C1,Complex C2)
{
    Complex Temp;
    Temp.a = C1.a+C2.a;
    Temp.b = C1.b+C2.b;
    return Temp;
}

int main()
{
    Complex A,B,C;
    A.setdata(10,20);
    B.setdata(10,20);

    C = operator+(A,B);
    C.showdata();
    return 0;
}
