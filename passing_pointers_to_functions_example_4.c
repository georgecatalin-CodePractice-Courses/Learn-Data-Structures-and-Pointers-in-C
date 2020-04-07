/* *****************************************************
* Passing pointers to functions example 4 c
* **************************************************** */

#include <stdio.h>

void change(char string[])
{
    string[0]='A';
}

int main()
{
    char s[]="Cat";

    puts(s);
    change(s);
    puts(s);

    return (0);
}