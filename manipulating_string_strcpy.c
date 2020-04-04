/* *****************************************************
* Manipulating string strcat
* **************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
    char first[]="George";
    char second[]="Calin";
    char fullname[60];

    strcpy(fullname,first);
    strcat(fullname,second);

    printf("Hello, %s. \n", fullname);

    return (0);
}