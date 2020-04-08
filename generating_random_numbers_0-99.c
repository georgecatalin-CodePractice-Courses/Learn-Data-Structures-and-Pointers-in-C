/* ***************************************
* Generating random numbers 0-99
* ************************************** */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,r;

    for ( i = 0; i < 1000; i++)
    {
        r=rand() %100;
        printf("The number is %d .\n", r);
    }
    
    return (0);
}