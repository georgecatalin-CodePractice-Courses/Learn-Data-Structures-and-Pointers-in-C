/* *****************************************
* Doing pointer math char array
* ***************************************** */

#include <stdio.h>

int main()
{
    char word[] = "bixerrah";
    char *ptr;

    ptr = word;

    printf("the address is %p.\n", ptr);

    printf("The address of the pointer incremented with 1 is %p.\n", ptr + 1); //pointer adds 1* size of data type char=1 byte

    return (0);
}