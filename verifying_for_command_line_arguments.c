/* ****************************************************
* Verifying for command line arguments
* *************************************************** */


#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    if (argc<2)
    {
        printf("No extra arguments are available for this program.\n");
    }
    else
    {
        for (i = 0; i < argc; i++)
        {
            printf("The arguments are %s = %d. /n",argv[i],i);
        }
    }
    return (0);
}