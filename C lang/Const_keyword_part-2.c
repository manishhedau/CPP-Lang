// Const
// ------------
/*
Usage
----------
1. The keyword const can be applied to any declaration, including those of structures,
unions,enumerated types or typedef names.

2. Applying it to a declaration is called qualifying the declaration.
3. Const means that something not modify.

By using pointer we can modify the const variable
Because the const only apply on that particular variable name
not on that variable address
And pointer points to memory address that the reason so by using pointer we can also modify the const variable

remember using const variable name we never can be changed it's value but using memory address and pointer we can changed it's memory values.
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
