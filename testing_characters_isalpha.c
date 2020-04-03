/* ********************************
* Testing characters isalpha()
* ********************************** */


#include <stdio.h>
#include <ctype.h>

int main()
{
    char string[]="Nifty TEXT! 123 \n";
    char ch;
    int i;

    while ((ch=string[i])!='\0')
    {
        if (isalpha(ch))
        {
            putchar('_');
        }
        else
        {
            putchar(ch);
        }
        
        i++;
    }
    
return (0);
}