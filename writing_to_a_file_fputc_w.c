/* **************************************************************
* Writing to a file with fputc() 
* ************************************************************** */

#include <stdio.h>

int main()
{
    FILE *handler;
    int i;

    handler=fopen("my_file.txt","w");

    if (handler==NULL)
    {
        printf("Error while writing to the file");
        return (1);
    }

    for ( i = 'A'; i < 'Z'; i++)
    {
        fputc(i,handler);
    }
    
    fclose(handler);

    return (0);
}