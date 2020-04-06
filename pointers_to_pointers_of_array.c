/* ********************************************************
* Understanding pointers of pointers of array
* ******************************************************* */

#include <stdio.h>

int main()
{
    char *ptr[]={"Audi", "Renault","Fiat", "Dacia","Skoda"};
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("%c \n",*(*(ptr+i))); 
        /* *****************
        * (ptr+i) is each memory location
        *  *(ptr+i) is the value that corresponds to each memory location, hence each element of the array = string
        *  * (*(ptr+i)) is the value that corresponds to the first element of each string , hence characters
        * */
    }
    
    return (0);
}