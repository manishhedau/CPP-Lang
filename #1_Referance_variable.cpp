#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    int &y = x;

    cout<<"The X Value : "<<x<<endl;
    cout<<"The Y value : "<<y<<endl;

    cout<<"The X Address : "<<&x<<endl;
    cout<<"The Y Address : "<<&y<<endl;

    x++;


    cout<<"\nAfter Incrementing X value "<<endl;
    cout<<"\nThe X Value : "<<x<<endl;
    cout<<"The Y value : "<<y<<endl;

    y++;

    cout<<"\nAfter Incrementing y value "<<endl;
    cout<<"\nThe X Value : "<<x<<endl;
    cout<<"The Y value : "<<y<<endl;
    return 0;
}
