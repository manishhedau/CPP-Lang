// Method Overriding
// ------------------
/*
    When we defined same name and same parameter type of function in derived class as well as in parent class and derived class inherited by parent class.
    And we did not want that the  derived class object called the same name parent class function and we want to override that function
    then we create the same function in derived class to override this thing and to change the definition of the derived class function.

    And when we create the object of derived class then through the early binding object first look into there own class and if the function exist
    and call the function.
*/


#include<iostream>
#include<conio.h>
using namespace std;
class Class_One
{
    int id;
    char name[20];
public:
    void setdata1(int id,char name[])
    {
        id = id;
        name = name;
    }
    void display()
    {
        cout<<"Student Information "<<endl;
        cout<<"Student id : "<<id<<endl;
        cout<<"Student Name : "<<name<<endl;
    }
};

class Class_Two : public Class_One
{
    int day;
    int month;
    int year;
public:
    void setdata2(int day1, int month1, int year1)
    {
        day = day1;
        month = month1;
        year = year1;
    }

    void display()
    {
        cout<<"DOB : "<<day<<"-"<<month<<"-"<<year<<endl;
    }
};


int main(){
    Class_Two obj;
    obj.setdata1(1,"Manish Hedau");
    obj.setdata2(10,2,2001);
    obj.display();
    obj.display();
    getch();
    return 0;

}
