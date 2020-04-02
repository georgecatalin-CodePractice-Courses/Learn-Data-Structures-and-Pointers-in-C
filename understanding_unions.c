/* **************************************
* Understanding unions
***************************************** */


#include <stdio.h>

int main()
{
    union storage
    {
        char code;
        int size;
    } reg;

    reg.code='A';
    printf("The code is %c. \n", reg.code);

    reg.size=1024;
    printf("The size is %d\n.", reg.size);
    printf("The code is %c. \n", reg.code); //this value changes because in an union both parts of the union share the same memory location.

    return (0);

}