/* ***************************************
* Working with characters conversions toupper()
* **************************************** */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char string[]="stop shouting at me! \n";
    int ch;
    int i=0;

    while ((ch=string[i])!='\0')
    {
        putchar(toupper(ch));
        i++;
    }
    
return (0);

}