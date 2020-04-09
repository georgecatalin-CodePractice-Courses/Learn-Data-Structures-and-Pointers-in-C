/* ********************************************
* Working with time functions time()
* ****************************************** */

#include <stdio.h>
#include <time.h>


int main()
{
    time_t now;

    time(&now);

    printf("The time now in UNIX Epoch seconds from 01.01.1970 is %ld. \n",now);

    return(0);
}