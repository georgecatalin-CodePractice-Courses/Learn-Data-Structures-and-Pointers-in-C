/* *****************************************
* Working with time . Showing specific time.
* *************************************** */

#include <stdio.h>
#include <time.h>

int main()
{
    time_t now;

    time(&now);
    struct tm * time_details;

    time_details=localtime(&now);

    printf("The time is %0d h - %0d m - %0d s. \n",
    time_details->tm_hour,time_details->tm_min,time_details->tm_sec);

    return(0);
}