/* *****************************************************
* Passing pointers to functions example 1 c
* **************************************************** */

#include <stdio.h>

void doubler(int *alpha)
{
    *alpha+=*alpha;
}

int main()
{
    int a;

    a=2;

    printf("The value of a before is %d. \n", a);

    doubler(&a);

    printf("The value of a after is %d. \n",a);

    return (0);
}