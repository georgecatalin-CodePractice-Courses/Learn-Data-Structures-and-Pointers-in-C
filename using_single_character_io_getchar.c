/* ********************************
* Using single character IO
******************************** */

#include <stdio.h>

int main()
{
 int ch;

 printf("Enter the character:\n");
 ch=getchar();
 printf("You have entered this: %c", ch);

 return (0);
}