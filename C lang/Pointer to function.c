

#include<stdio.h>
int add(int, int);

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int (*ptr)(int ,int);

    ptr = &add;
    printf("\n number sum : %d",ptr(a,b)); // we can also use (*ptr)(a,b)  in this line

    return 0;
}

int add(int x,int y)
{
    int z = x+y;
    printf("Sum is : %d",z);
    return z;
}
