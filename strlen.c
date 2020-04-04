/* **********************************************************************
* Exploring string functions strlen()
************************************************************************ */

#include <stdio.h>
#include <string.h>

int main()
{
    char string[]="Hello, my dear friend.";
    int len;

    len=strlen(string);

    printf("The string \" %s  \" has a length of %d characters. \n", string, len);

    return (0);
}