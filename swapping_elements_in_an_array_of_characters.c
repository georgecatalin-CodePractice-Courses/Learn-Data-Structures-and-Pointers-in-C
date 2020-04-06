/* ********************************************************
* Swapping elements in an array of strings with pointers
* ******************************************************* */

#include <stdio.h>

int main()
{
    char *ptr[]={"Audi","Volkswagen","Mercedes","Renault","Nissan"};
    char *temp;
    int i;

    puts("Before changing");
     for ( i = 0; i < 5; i++)
    {
        printf("%s \n",ptr[i]);
    }

    temp=ptr[1];
    ptr[1]=ptr[2];
    ptr[2]=temp;

    puts("After changing");
    for ( i = 0; i < 5; i++)
    {
        printf("%s \n",ptr[i]);
    }

    return (0);
}