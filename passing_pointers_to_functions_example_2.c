/* *****************************************************
* Passing pointers to functions example 2 c
* **************************************************** */

#include <stdio.h>

void doubler(int *ptr)
{
    *ptr+=*ptr;
}

int main()
{
    int b;
    int *a;

    b=25;
    a=&b;

    printf("The value stored at location in memory as \"a\" before the modification is %d.\n",*a);

    doubler(a);

    printf("THe value stored at memory location a after the modification , which is the same value as b is %d=%10d. \n", *a,b);

    return (0);
}