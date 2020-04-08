/* *******************************************
* Reading multiple chunks of data at once
* ******************************************* */

#include <stdio.h>

int main()
{
    const char filename[]="file.dat";
    int i;
    int a[10];

    /* *** Open file *** */
    FILE *handler;

    handler=fopen(filename,"r");
    if (handler==NULL)
    {
        printf("Error when opening the file");
        return (1);
    }
    
    /* *** Reading the chunks of data into a variable array *** */
    fread(&a,sizeof(int),10,handler);  //memory address of the variable, size of the chunk of data, number of chunks to be read, file handler

    for ( i = 0; i < 10; i++)
    {
        printf("%d \n",a[i]);
    }
    
    return (0);
}