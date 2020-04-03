/* ***************************************
* Working with characters conversions mixed
* **************************************** */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char string[]="Nifty TEXT! 123 \n";
    int ch;
    int i=0;

    while ((ch=string[i]))
    {
        if (isupper(ch))
        {
            putchar(tolower(ch));
        }
        else if (islower(ch))
        {
            putchar(toupper(ch));   
        }
        else
        {
            putchar(ch);
        }
        
        i++;
    }
    
    return (0);
}