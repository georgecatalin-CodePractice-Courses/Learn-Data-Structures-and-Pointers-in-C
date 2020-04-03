/* *******************************************************************
* Using getc(stdin)
* ***************************************************************** */

#include <stdio.h>

int main()
{
    int ch1,ch2;

    printf("Enter the characters from the keyboard:");
    ch1=getc(stdin);
    ch2=getc(stdin);

    printf("You entered the following letters %c and %c. \n",ch1,ch2);
    return (0);
}