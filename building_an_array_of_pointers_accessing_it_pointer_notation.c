/* ********************************************************
* Building an array of pointers and accessing it with pointer notation
* ******************************************************* */

#include <stdio.h>

int main()
{
    char *ptr[]={"George","Catalin","Calin"};
    int i;

    for ( i = 0; i < 3; i++)
    {
       printf("%s .\n", *(ptr+i));
    }

    return (0);
}