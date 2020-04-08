/* ****************************************
*  Writing and reading raw data with fwrite and fread
* ***************************************** */

#include <stdio.h>

int main()
{
    int i, a;
    const char filename[]="file.dat";

    /* *** open file *** */
    FILE *handler;

    handler=fopen(filename,"r");

    if (handler==NULL)
    {
        printf("Error while opening the file");
        return (1);
    }
   
    /* *** read data from file *** */
    for ( i = 0; i < 10; i++)
    {
        fread(&a,sizeof(int),1,handler);
        printf("%d\n",a);
    }

    /* **** close the file *** */
    fclose(handler);
    
    return (1);
}