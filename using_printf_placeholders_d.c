/* ******************************
* Using printf() placeholders
* ***************************** */

#include <stdio.h>

int main()
{
    int a=123456;

    printf("Normal display: \n");
    printf("%d \n",a);

    printf("right justified on 8 spaces:\n");
    printf("%8d \n",a);

    printf("Left justified on 8 characters: \n");
    printf("%-8d \n",a);

    printf("Zero filling on 8 chars: \n");
    printf("%08d \n",a);

    return (0);
}