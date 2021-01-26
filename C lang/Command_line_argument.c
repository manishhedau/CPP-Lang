// Command line
// ------------
/*
When we run the exe file with command prompt then we can get some argument from user.

see the output of this program in below example.

OUTPUT:
-----------
    E:\mypro\bin\Debug>mypro manish yogesh harsh ketan ankit
    The number of argument : 6
     mypro
     manish
     yogesh
     harsh
     ketan
     ankit
 */

#include<stdio.h>


int main(int argc, char* argv[])
{

    printf("The number of argument : %d",argc);
    for(int i = 0; i<argc;i++)
    {
        printf("\n %s",argv[i]);
    }
    return 0;
}
