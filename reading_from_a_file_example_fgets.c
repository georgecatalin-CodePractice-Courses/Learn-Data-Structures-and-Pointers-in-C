/* *************************************
* Reading from a file example 1 fgets
* ************************************ */

#include <stdio.h>

int main()
{
    const char filename[]="sonnet18.txt";
    char buffer[64];

    FILE *handler;

    handler=fopen(filename,"r");

    if (handler==NULL)
    {
        printf("Error when opening the file '%s'. \n",filename);
        return (1);
    }
    
    while (fgets(buffer,64,handler))
    {
        printf("%s",buffer);
    }

    return (0);
    
}