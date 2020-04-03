/* ************************************************
* Sending string output
* *********************************************** */

#include <stdio.h>

int main()
{
    char string[]="I'm such a handsome program. \n";
    int i=0;

    while (string[i]!='\0')
    {
        putchar(string[i]);
        i++;
    }
    
    return (0);
}