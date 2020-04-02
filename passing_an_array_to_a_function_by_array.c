/* ***********************************************
* Passing an array to a function by array
* *********************************************** */

#include <stdio.h>

void incshow(char string[])
{
    int i;

    for (i = 0; i < 7; i++)
    {
        string[i]++;
        putchar(string[i]);
    }
}

int main()
{
    char mystring[]="George";

    incshow(mystring);
    putchar('\n');

    return (0);
}
