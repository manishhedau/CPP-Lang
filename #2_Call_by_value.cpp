#include<iostream>
using namespace std;

int add(int, int);
int main()
{
    int a,b;
    cout<<"Enter the two values : ";
    cin>>a>>b;

    cout<<"\nThe sum of two number : "<<add(a,b)<<endl;

}
int add(int a, int b)
{
    return a+b;
}
