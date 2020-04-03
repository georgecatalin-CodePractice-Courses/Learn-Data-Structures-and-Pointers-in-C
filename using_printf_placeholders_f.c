/* ******************************
* Using printf() placeholders
* ***************************** */

#include <stdio.h>

int main()
{
    float a=123456.44545;

    printf("Normal display: \n");
    printf("%f \n",a);

    printf("right justified on 15 spaces:\n");
    printf("%15.2f \n",a);

    printf("Left justified on 15 characters: \n");
    printf("%-15.1f \n",a);

    return (0);
}