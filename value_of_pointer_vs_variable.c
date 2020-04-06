/* ***************************************************
* Understanding pointers versus the address of a variable
* A pointer is a variable that holds a memory location.
**************************************************** */

#include <stdio.h>

int main()
{
    int alpha;
    int *ptr;

    ptr=&alpha;

    printf("The value stored in variable \"alpha\" is %d. \n",alpha);
    printf("The value stored at location %p of memory is %d.\n",ptr,*ptr);

return (0);
}