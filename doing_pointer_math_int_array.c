/* *****************************************
* Doing pointer math example 2
* ***************************************** */

#include <stdio.h>

int main()
{
    int even[]={0,2,4,6,8};
    int *ptr;

    ptr=even; //pointer stores the memory address where the array starts its storage

    printf("%p.\n",ptr);
    printf("%p.\n",ptr+1);

    return (0);

}