// Friend Function
// ------------------
/*
The Friend function is friend of the class but it's not a member function of the class.
That friend function can access some member function of the class

Like we can share our chocalate with our friend.

Friend function is declared in the class with friend keyword.

It must be defined outside the class to which it is friend.

Friend function can access any member of the class to which it is friend.
friend function can not access members of the class directly.
It has no caller object.
It should not be defined with membership label.
*/

#include<iostream>
using namespace std;

class myclass
{
private:
    int a,b;
public:
    myclass(int x, int y)
    {
        a = x;
        b = y;
    }

    int add()
    {
        return a+b;
    }
    void showadd()
    {
        cout<<"Add : "<<add()<<endl;
    }

    // friend function defined inside the class
    friend void fun(myclass c);
};

// friend function defination
void fun(myclass c)
{
    cout<<"Adding values through Friend function : "<<c.a + c.b<<endl;
}

// main function
int main()
{
    myclass A(10,20);
    A.add();
    A.showadd();

    cout<<"\n********************Friend function***************"<<endl;
    fun(A);
    return 0;
}
