#include<iostream>
using namespace std;

struct Book{

    int id;
    char title[20];
    int price;
};

Book input();

Book input()
{
    Book B;
    cout<<"Enter the Book id : ";
    cin>>B.id;
    cout<<"\nEnter the Book title : ";
    cin>>B.title;
    fflush(stdin);
    cout<<"\nEnter the Book price : ";
    cin>>B.price;
    return B;
}


int main()
{
    struct Book b1;
    b1 = input();

    cout<<"Book id : "<<b1.id<<endl;
    cout<<"Book title : "<<b1.title<<endl;
    cout<<"Book price : "<<b1.price<<endl;
    return 0;
}
