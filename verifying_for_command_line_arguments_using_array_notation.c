/* **********************************************
* Verifying for command line arguments using array notation
* ******************************************** */

#include <stdio.h>

int main(int argc, char **argv)
{
    int i;

    if (argc<2)
    {
        printf("This program does not have extra parameters.");
    }
    else
    {
        printf("The parameter %d is %s. \n", i, *(argv+i));
    }
    
    return (0);
}