/* *****************************************
* Doing pointer math
* ***************************************** */


#include <stdio.h>

int main()
{
    int alpha;
    int *ptr;

    ptr=&alpha;

    printf("The memory address stored in pointer \"ptr\" is %p. \n", ptr);

    printf("When adding 1 to the memory address, then the result is %p.\n",ptr+1);

    return (0);
}