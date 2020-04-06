/* ***************************************************
* Allocating memory
* ************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *buffer;

    buffer= (char *) malloc(sizeof(char)*128);

    if (buffer==NULL)
    {
        printf("ERROR while allocating memory.");
        exit(1);
    }

    puts("The memory was allocated");
    free(buffer);

    puts("Memory was freed.");
    return (0);
}