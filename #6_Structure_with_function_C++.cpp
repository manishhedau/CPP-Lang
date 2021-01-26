#include<iostream>
using namespace std;

struct Book{

    int id;
    char title[20];
    int price;
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
};


int main()
{
    struct Book b1;

    b1.input();
    cout<<"Book id : "<<b1.id<<endl;
    cout<<"Book title : "<<b1.title<<endl;
    cout<<"Book price : "<<b1.price<<endl;
    return 0;
}
