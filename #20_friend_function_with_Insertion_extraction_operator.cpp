// Program for Overloading of insertion and Extraction Operator

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
    friend ostream& operator<<(ostream&,Complex);
    friend istream& operator>>(istream&,Complex&);
};
ostream& operator<<(ostream &dout,Complex C)
{
    cout<<"\n A = "<<C.a<<" B = "<<C.b;
    return(dout);
}
istream& operator>>(istream &din, Complex &C)
{
    cin>>C.a>>C.b;
    return(din);
}


int main()
{
    Complex A;
    cout<<"Enter the numbers : "<<endl;
    cin>>A;
    cout<<"You Entered Numbers !"<<endl;
    cout<<A;
    return 0;
}
