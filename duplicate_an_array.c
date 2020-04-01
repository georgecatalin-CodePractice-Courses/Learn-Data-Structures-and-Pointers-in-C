/* ***********************************************
* How to duplicate an array
* ********************************************** */

#include <stdio.h>

int main()
{
    int array[5]={18,20,36,41,50};
    int duplicate[5];
    int i;

    for (i=0;i<5;i++)
    {
        duplicate[i]=array[i];
    }

    puts("The elements of both arrays:");
    for (i=0;i<5;i++)
    {
        printf("At element %d is %d = %d. \n",i+1,array[i],duplicate[i]);
    }

    return (0);
}
