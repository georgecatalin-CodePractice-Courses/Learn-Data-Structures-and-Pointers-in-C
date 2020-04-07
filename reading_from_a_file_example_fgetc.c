/* *************************************
* Reading from a file example 1
* ************************************ */

#include <stdio.h>

int main()
{
    const char filename[]="sonnet18.txt";
    char ch;

    FILE *handler;

    handler=fopen(filename,"r");

    if (handler==NULL)
    {
        printf("Error when opening file \"%s\".\n", filename);
        return (1);
    }

    while (1)
    {
        ch=fgetc(handler);

        if (ch==EOF)
        {
            break;
        }

        putchar(ch);     
    }

}
