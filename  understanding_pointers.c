/* ***************************************************
* Understanding pointers
* A pointer is a variable that holds a memory location.
**************************************************** */

#include <stdio.h>

int main()
{
    int alpha;

    alpha = 27;

    printf("The value of integer variable is %d.\n", alpha);
    printf("The size of variable alpha in memory is %lu . \n", sizeof(alpha));
    printf("The location of the variable in memory is %p. \n", &alpha);

    return (0);
}