/* ****************************************
* Get addresses of elements in array
* *************************************  */

#include <stdio.h>

int main()
{
    int array[]={2,4,6,8,10};
    int *ptr;
    int i;

    ptr=array;

    for (i = 0; i < 5; i++)
    {
        printf("%p \t = %p \n",ptr+i,&array[i]);
    }

    return (0);
}