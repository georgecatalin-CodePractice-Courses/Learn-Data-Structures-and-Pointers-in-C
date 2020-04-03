/*  ******************************************
* Fetching string input
* ****************************************** */

#include <stdio.h>

int main()
{
    char mystring[10];

    printf("Enter your name, please:");
    scanf("%9s",mystring);  //reads only the first 9 characters from the string 

    printf("Hello, %s, it is so nice to meet you.", mystring);

    return (0);

}