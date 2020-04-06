/* *****************************************
* Doing pointer math float array
* ***************************************** */

#include <stdio.h>

int main()
{
    float array[]={1.2,3.4,2.2,24.4};
    float *ptr;

    ptr=array; //pointer is assigned the address of the first element of the array which is the actual memory address of the array

    printf("The address of the array is %p. \n",ptr);

    printf("The pointer incremented with 1 makes %p. \n",ptr+1); //the pointer is incremented with the 1* size of float data type

    return (0);
}