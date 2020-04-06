/* ******************************************************
* Allocating memory for an int array
* ***************************************************  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integers[10];
    int *buffer;
    int i;

    buffer= (int *) malloc(sizeof(int)*10);

    if (buffer==NULL)
    {
        printf("Error when allocating memory.\n");
        exit(1);
    }

    /* **** fill in and display elements of the array in the chunk of memory allocated *** */
    for (i = 0; i < 10; i++)
    {
        * (buffer+i)=2*i+1;
        printf("%d \n",* (buffer+i));
    }
    
    free(buffer);
    puts("Memory was freed.");

    return(0);
}