/* ****************************************
* Size of data types in C language
* *************************************** */

#include <stdio.h>

int main()
{
    int a;
    char c;
    float f;
    double d;

  puts("The sizes in memory of different data types:\n");

  printf("char data type \t %lu \n", sizeof(c));
  printf("int data type \t %lu \n", sizeof(a));
  printf("float data type \t %lu \n",sizeof(f));
  printf("double data type \t %lu \n", sizeof(d));

  return(0);

}