/* ***************************************************
* Understanding pointers versus the address of a variable
* A pointer is a variable that holds a memory location.
**************************************************** */

#include <stdio.h>

int main()
{
    int alpha;
    int *ptr;

    alpha=988;
    ptr=&alpha;

    printf("The value of the variable' address in memory is : %p.\n",&alpha);
    printf("The value of the pointer \"ptr\" is %p. \n" , ptr);

return (0);
}