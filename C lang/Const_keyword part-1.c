// Const
// ------------
/*
1. Const is an keyword in c language.
2. const is qualifier.

3. What qualifier does is that it increases variable quality means when we used CONST keyword in variable declaration
then we can never change that variable values.

4. The qualifier const can be applies to the declaration of any variable to specify that it is value will not be changed.



 */

#include<stdio.h>


int main()
{
    int x = 5;
    const int y = 4;
    printf("\n\tx = %d",x);
    printf("\n\tx = %d",y);
    x++;
    //y++; here we will get error
    printf("\n\tAfter increament the local variable");
    printf("\n\tx = %d",x);
    printf("\n\tx = %d",y);

    return 0;
}
