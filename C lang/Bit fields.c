// Bit Fields
// ------------
/*
1. Bit fields are use to consume memory efficiently when we know
that the value of a field or group of fields will never exceed a
limit or is within a small range.

2. It can be used in structure and union.

 */

#include<stdio.h>

struct date1
{
    unsigned int d; // 4 bytes
    unsigned int m; // 4 bytes
    unsigned int y; // 4 bytes = 12 bytes
};

struct date2
{
    unsigned int d:5; // by  using this the variable take only 5 bits in program
    unsigned int m:4; // and also here m variable take 4 bits in memory
    unsigned int y; // 4 bytes = 8 bytes
};
int main()
{
    struct date1 d1 = {22,1,2016};
    struct date2 d2 = {22,1,2016};

    printf("\nSize of d1 : %d",sizeof(d1)); // 12 bytes
    printf("\nSize of d1 : %d",sizeof(d2)); // 8 bytes
    return 0;
}
