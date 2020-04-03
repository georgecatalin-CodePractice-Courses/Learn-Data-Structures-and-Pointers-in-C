/* ******************************
* Using printf() placeholders
* ***************************** */

#include <stdio.h>

int main()
{
    char a[]="crocodile";

    printf("Normal display: \n");
    printf("%s \n",a);

    printf("right justified on 15 spaces:\n");
    printf("%15s \n",a);

    printf("Left justified on 15 characters: \n");
    printf("%-15s \n",a);

    printf("Left justified on 15 characters,truncated to 6 characters: \n");
    printf("%-15.6s \n",a);

    printf("Left justified on 15 characters,truncated to 6 characters: \n");
    printf("%15.6s \n",a);

    return (0);
}