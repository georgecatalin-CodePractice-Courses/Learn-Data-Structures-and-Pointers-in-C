/* ********************************************************
* Building an array of pointers and accessing it with array notation
* ******************************************************* */


#include <stdio.h>

int main()
{
    char *ptr[]={"Stefan cel Mare","Baba Novac","Mihai Viteazul", "Mircea cel Batran"}; //an array of pointers , each pointer being initialized to the 1st letter in each element of an array of strings
    int i;

    for ( i = 0; i < 4; i++)
    {
        printf("%s. \n",ptr[i]);
    }

    return (0);
    
}