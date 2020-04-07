/* **************************************************************
* Writing to a file with fputc() fopen("a")
* ************************************************************** */

#include <stdio.h>

int main()
{
    FILE *handler;
    char i;

    handler=fopen("my_file.txt","a"); //append at the end of an existing file

    if (handler==NULL)
    {
        printf("Error when writing to a file '%s'.\n","my_file.txt");
        return (0);
    }

    fputc('\n',handler);

    for ( i ='a' ; i < 'z'; i++)
    {
        fputc(i,handler);
    }
    
    return (0);
}