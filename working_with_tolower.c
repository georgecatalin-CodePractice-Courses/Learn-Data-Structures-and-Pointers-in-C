/* ***************************************
* Working with characters conversions tolower()
* **************************************** */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char string[]="My aunt types her email in ALL CAPS. \n";
    int ch;
    int i=0;

    while ((ch=string[i])!='\0')
    {
        putchar(tolower(ch));
        i++;
    }

    return (0);
}