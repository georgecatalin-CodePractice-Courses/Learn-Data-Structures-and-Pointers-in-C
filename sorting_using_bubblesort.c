/* *************************************************************
* Sorting data using bubblesort method
* ************************************************************ */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 100

int main()
{
    int list[SIZE];
    int a,b, temp;

    /* **** seeding the randomizer **** */
    srand((unsigned) time(NULL));

    /* *** Build and display random numbers *** */
    printf("The %d numbers generated randomly and unsorted are: \n", SIZE);
    for (a = 0; a < SIZE; a++)
    {
        list[a]=rand() %100 +1;
        printf("%0d \t",list[a]);
    }
    
    putchar('\n');

    /* *** Performing the bubblesort *** */
    for ( a = 0; a < SIZE-1; a++)
    {
        for (b = a+1 ;b < SIZE;b++)
        {
           if (list[a]>list[b])
           {
               temp=list[a];
               list[a]=list[b];
               list[b]=temp;
           }
           
        }
        
    }

    /* *** Display the sorted values *** */
    printf("%d randomly generated value, sorted are: \n",SIZE);

    for (a = 0; a < SIZE; a++)
    {
        printf("%4d",a);
    }
    
    putchar('\n');
    

    return (0);

}