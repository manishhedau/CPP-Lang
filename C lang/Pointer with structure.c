#include<stdio.h>

struct Student
{
    char name[20];
    int id;
};

int main()
{
    struct Student S1,*S2;
    S2 = &S1;
    printf("\n\tEnter the name : ");
    gets(S2->name);
    printf("\n\tEnter the id: ");
    scanf("%d",&S2->id);


    printf("\n\n\t\t*****************Displaying Details*****************");

    printf("\nName : %s",S2->name); // s2->name means = (*S2).name = *S2 is S1
    printf("\nId : %d",S2->id);


    return 0;
}
