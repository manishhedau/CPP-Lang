
// Unary Operator overloading using friend function

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
    friend Complex operator ++(Complex);
};
Complex operator ++(Complex C1)
{
    Complex Temp;
    Temp.a = ++C1.a;
    Temp.b = ++C1.b;
    return Temp;
}

int main()
{
    Complex A,B;
    A.setdata(10,20);

    B = operator++(A);
    A.showdata();
    B.showdata();
    return 0;
}
