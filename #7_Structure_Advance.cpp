#include<iostream>
using namespace std;

struct Book{

    private:

    int id;
    char title[20];
    int price;

    public:
    void input()
    {
        cout<<"Enter the Book id : ";
        cin>>id;
        cout<<"\nEnter the Book title : ";
        cin>>title;
        fflush(stdin);
        cout<<"\nEnter the Book price : ";
        cin>>price;
    }
    void display()
    {
        cout<<"Book id : "<<id<<endl;
        cout<<"Book title : "<<title<<endl;
        cout<<"Book price : "<<price<<endl;
    }
};


int main()
{
    struct Book b1;

    b1.input();
    b1.display();
    return 0;
}
