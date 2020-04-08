/* ******************************************************
* Writing raw data with fraw()
* **************************************************** */

#include <stdio.h>

int main()
{
    int i, a;
    const char filename[]="file.dat";

    /* *** open file *** */
    FILE *handler;


    handler=fopen(filename,"w");

    if (handler==NULL)
    {
        printf("Error while opening the file");
        return (1);
    }

    /* *** write to file *** */
    a=10;
    for ( i = 0; i < 5; i++)
    {
        fwrite(&a,sizeof(int),1,handler);
        a++;
    }
    
    /* *** close the file *** */
    fclose(handler);

    return(0);
}