// New and delete
// ---------------

/*
1. Static memory allocation
-------------------------------


Ex- int x;
    float y;

2. Dynamic memory allocation
--------------------------------

Ex - int *p = new int;
    float *q = new float;
    complex *ptr = new  complex;

    we can also create array using new

    float *p = new float[5];



Delete
------
use to release the dynamic created variable

Ex- delete p;
    delete []p;

 */


#include<iostream>
using namespace std;

class Myclass
{
private:
    int *p;
public:
    Myclass()
    {
        p = new int[5];
    }
    ~Myclass()
    {
    delete []p;
    }
    void display()
    {
        cout<<"Display the value of dynamic array : "<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<i+1<<" : "<<p[i]<<endl;
        }
    }

    void setval()
    {
        cout<<"set the value \n";
        for(int i=0;i<5;i++)
        {
            cout<<"Enter number for "<<i<<" : ";
            cin>>p[i];
        }
    }

};

int main()
{
    Myclass M;
    M.setval();
    M.display();
}
