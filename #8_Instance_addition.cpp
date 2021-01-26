#include<iostream>
using namespace std;

class Complex{

    public:
        int a,b;

        void setdata(int x,int y)
        {
            a = x;
            b = y;
        }

        void showdata()
        {
            cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
        }
        Complex add(Complex c)
        {
            Complex temp;
            temp.a = a+c.a;
            temp.b = b+c.a;
            return temp;
        }

};


int main()
{
    Complex B1,B2,B3;

    B1.setdata(5,6);
    B2.setdata(5,6);

    B3 = B1.add(B2);

    B3.showdata();
    return 0;
}
