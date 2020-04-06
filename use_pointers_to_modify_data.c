/* ***************************************************
* How to use pointers to modify data.
* A pointer is a variable that holds a memory location.
**************************************************** */

#include <stdio.h>

int main()
{
    int alpha;
    int *ptr;

    alpha=99;
    ptr=&alpha;

    printf("the value of variable \"alpha\" is %d.\n",alpha);

    *ptr=66;

    printf("the value of variable \" alpha \" is %d. \n", alpha);

    return (0);
}