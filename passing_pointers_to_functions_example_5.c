/* *****************************************************
* Passing pointers to functions example 5 c
* **************************************************** */

#include <stdio.h>

void change(char *s)
{
    *(s+1)='A';
}

int main()
{
    char pet[]="cat";

    puts(pet);

    change(pet);

    puts(pet);

    return (0);
}