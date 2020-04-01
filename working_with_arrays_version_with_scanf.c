/* **********************************************
* Working with Arrays version 2
*********************************************** */

#include <stdio.h>

int main()
{
    float highscores[5];
    int i;


    for (i=0;i<5;i++)
    {
        printf("Enter the element #%d of the array:\n",i+1);
        scanf("%f",&highscores[i]);
    }

    puts("Here are the highest scores recorded:");

    for (i=0; i<5; i++)
    {
        printf("Score #%d is %.2f. \n",i+1, highscores[i]);
    }

    return (0);
}
