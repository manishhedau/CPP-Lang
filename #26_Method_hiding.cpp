// Method Hiding
// -----------------
/*
    When we create same name and with different types of parameters in parent class and as well as the derived class too and
    derived class is inherited by the parent class.
    then this concept is called as Method Hiding.

    Always remember that the parameter should not be same in other function too. Otherwise this concept will become the method overriding.
*/


#include<iostream>
using namespace std;


class One
{
public:
    // no parameter but have the same name
    void display()
    {
        cout<<"The function call !!!"<<endl;
    }

};

class Two : public One
{
public:
    // one parameter function but have the same name
    void display(int a)
    {
        // Method hiding
        cout<<"The value is A : "<<a<<endl;
    }


};

int main()
{
    Two obj;
    obj.display(); // class One function // error
    // because object calling display function and obj is an object of Two class so by early binding rule first object check first the display
    // function in there own class or not , if exist then it check the parameter are same as we pass while calling and if all the things are right
    // then  function will execute correctly otherwise it will gives you an error if function exist in there class and but the parameter are not same.
    obj.display(1); // Method hiding // class Two function

}
s
