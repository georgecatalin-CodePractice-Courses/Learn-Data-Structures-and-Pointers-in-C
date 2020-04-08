/* ***********************************
* Creating random numbers in C
* ********************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,r;

    for ( i = 0; i < 10; i++)
    {
        r=rand();
        printf("The number is %d. \n",r);
    }
    
    return (0);
}