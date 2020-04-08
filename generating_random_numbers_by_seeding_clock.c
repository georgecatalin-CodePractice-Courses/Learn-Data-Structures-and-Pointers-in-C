/* **************************************
* Generating random numbers by seeding clock ticks
* ************************************** */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, r;

    srand( (unsigned) time(NULL)); //seed the random generator with current clock time, typecast to unsigned int

    for ( i = 0; i < 100; i++)
    {
        r=rand()%100+1;
        printf("%4d", r);
        puts(" ");
    }
    return (0);
}