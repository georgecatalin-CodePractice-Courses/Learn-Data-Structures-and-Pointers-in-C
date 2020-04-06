/* *******************************************************
* Accessing each elements of an array
* ***************************************************** */

#include <stdio.h>

int main()
{
    int array[]={2,4,6,8,10};
    int *ptr;

    ptr=array;
    
    printf("The value of element[0] in array  with array notation is %d. \n",array[0]);
    printf("The value of element[0] in array  with pointer notation is %d. \n",*(ptr+0) );

    printf("The value of element[1] in array  with array notation is %d. \n",array[1]);
    printf("The value of element[0] in array  with pointer notation is %d. \n",*(ptr+1) );

    printf("The value of element[2] in array  with array notation is %d. \n",array[2]);
    printf("The value of element[0] in array  with pointer notation is %d. \n",*(ptr+2) );

    printf("The value of element[3] in array  with array notation is %d. \n",array[3]);
    printf("The value of element[0] in array  with pointer notation is %d. \n",*(ptr+3));

    printf("The value of element[4] in array  with array notation is %d. \n",array[4]);
    printf("The value of element[0] in array  with pointer notation is %d. \n",*(ptr+4) );

    return (0);
}