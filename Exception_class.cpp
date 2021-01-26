#include<iostream>
#include<exception>
using namespace std;

class myexception : public exception
{
    virtual const char *what() const throw()
    {
        return "Exception Occcured";
    }
};

int main()
{
   try {
        throw myexception();
    }

    catch(exception &e)
    {
        cout<<e.what();
    }
    cout<<"\nBye..."<<endl;
    return 0;

}
