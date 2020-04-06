/* ************************************************
* Get the address of an array
* *********************************************** */

#include <stdio.h>

int main()
{
    char text[10];
    char *ptr;

    ptr=text;

    printf("The memory address of the text array is %p. \n",text);
    printf("The value stored in the pointer \" ptr \" is %p. \n", ptr);

    return (0);

}