#include<iostream>
using namespace std;

/*Static
--------
Static is an keyword in c++ lang. by we can create only one copy of an variable which is static variable.
If we create static variable inside any class then it will also be called static member variable/class variable.
The default value of an static variable always be zeros and we can also change it value when we need.

1. Static local variable
2. static member variable/class variable
3. static member function

2. static member variable/class variable
----------------------------------------
static member variable is created inside an class that's why it also called as class variable. static keyword only create the one copy in the memory.
and it's memory till not distroyed till then program execution will not be end.
and we can only set value in static member variable using class name.
and we set it's value outside of the class.
and we can also access static member variable using classname and using instance/object.

Ex - dtype classname :: static_variable_name; // we can also pass the value using = operator or otherwise default value of an instance variable is zero(0).

3. Static member function/class function
----------------------------------------
static member function behave like same static member variable, it also create only one copy of an function and also not distroyed till program will not end
and we can also also static member function using instance.

One more import thing is static member function can only access the static member variable

Ex -  classname :: function_name(argument);
*/

class Static_variable{
public:
    int a;
    static int b; // static member variable/ class variable
    static float c;
    void setadata()
    {
        cout<<"Enter the a value : ";
        cin>>a;
    }
    static void getdata()
    {
        cout<<"The value of b : "<<b<<endl; // static member function can only access the static variable
    }

};

int Static_variable :: b; // default value always be Zeros
float Static_variable :: c = 12; // we can also set it's value
int main()
{
    Static_variable a1;
    a1.getdata();
    a1.setadata();
    cout<<"\nThe c value : "<<a1.c<<endl;

    return 0;
}
