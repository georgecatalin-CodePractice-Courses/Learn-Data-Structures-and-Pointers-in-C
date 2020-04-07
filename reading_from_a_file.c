/* *************************************
* Reading from a file
* ************************************ */

#include <stdio.h>

int main()
{
    const char filename[]="sonnet18.txt";

    FILE *handler;

    /* *** Open the file *** */
    handler=fopen(filename,"r");

    if (handler==NULL)
    {
        printf("Error when opening the file \" %s \" ",filename);
        return(1);
    }

    printf("The file \"%s\" was opened",filename);

    /* *** Close the file *** */
    fclose(handler);
    
     return (0);   
    
    
}