/* *****************************************
* Capture an output from a program
* ****************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *phandler;
    int ch;

    phandler=popen("uname","r");

    if (phandler==NULL)
    {
        printf("Something is wrong.");
        return (0);
    }
    

    while ((ch=fgetc(phandler))!=EOF)
    {
        putc(ch, stdout);
    }
    
    pclose(phandler);

    return (0);
}