/* *******************************************
* Working with ctime() function
* ****************************************** */

#include <stdio.h>
#include <time.h>

int main()
{
    time_t now;

    time(&now);

    printf("The time now is %s .\n", ctime(&now));

    return (0);
}