/* **************************************************
* Sorting using qsort
* ************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int compare(const void *a, const void *b)
{
    return(*(int *)a-*(int *)b);
}

int main()
{
    int list[SIZE];
    int a,b,temp;

    srand((unsigned) time(NULL));

    for ( a = 0; a < SIZE; a++)
    {
        list[a]=rand() %100 +1;
        printf("%4d",list[a]);
    }
    putchar('\n');

    printf("%d randomly generated integers sorted:\n", SIZE);

    qsort(list,SIZE,sizeof(int),compare);

    for ( a = 0; a < SIZE-1; a++)
    {
        printf("%4d",list[a]);
    }
    
    return (0);
}