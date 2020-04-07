/* ************************************************
* Writing to a file
* ********************************************** */

#include <stdio.h>

int main()
{
    FILE *handler;

    handler=fopen("new_file.txt","w");

    if (handler==NULL)
    {
        printf("Error when writing to file '%s', \n","new_file.txt");
        return (1);
    }

    fprintf(handler," Hello, George.");

    fclose(handler);

    return (0);
}