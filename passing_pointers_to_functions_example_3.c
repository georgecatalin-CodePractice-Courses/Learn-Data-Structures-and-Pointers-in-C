/* *****************************************************
* Passing pointers to functions example 3 c
* **************************************************** */

#include <stdio.h>

void calculation(float a, float *b, float *c)
{
    *b=a/3;
    *c=a/4;
}

int main()
{
    float x,y;

    calculation(20,&x,&y);
    printf("20/3=%10.1f. \t 20/4=%10.2f \n",x,y);

    return (0);
}