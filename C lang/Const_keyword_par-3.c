
/*
Pointer to const
---------------

1. const int *p;
2. int const *p;

here we can changed the address of the pointer but can not changed the address pointing value.

const pointer
------------
int * const p;

by using const pointer we can changed the pointing address of pointer
but we can changed the pointing address value.



*/


#include<stdio.h>


int main()
{
    const int x = 5;
    int *p;
    p = &x;
    printf("\n\tx = %d",x);

    ++(*p);

    printf("\n\tAfter increament the pointer variable");
    printf("\n\tx = %d",x);


    return 0;
}
