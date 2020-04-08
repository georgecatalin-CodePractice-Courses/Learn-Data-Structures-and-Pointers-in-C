/* **************************************************
*  Generating random numbers with seed
* ************************************************ */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, r;
    unsigned a;

    puts("Type an unsigned number:");
    scanf("%u",&a);

    srand(a);

    for ( i = 0; i < 100; i++)
    {
        r=rand() %100 +1;
        printf("%d \t", r);
    }

   return (0); 
}