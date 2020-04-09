/* ****************************************
* Working with times by using defined array chars for weeks and months
* ************************************** */

#include <stdio.h>
#include <time.h>

int main()
{
    time_t now;

    time(&now);
    char *weekday[] = {"Duminica", "Luni", "Marti", "Miercuri", "Joi", "Vineri", "Sambata"};
    char *month[] = {"Ianuarie", "Februarie", "Martie", "Aprilie", "Mai", "Iunie", "Iulie", "August", "Septembrie", "Octombrie", "Noiembrie", "Decembrie"};

    struct tm *time_properties;

    time_properties = localtime(&now);

    printf("The calendaristic date detailed is %s %s %d %0d:%0d:%0d",
           weekday[time_properties->tm_wday],
           month[time_properties->tm_mday],
           time_properties->tm_year + 1900,
           time_properties->tm_hour,
           time_properties->tm_min,
           time_properties->tm_sec);

    return (0);
}