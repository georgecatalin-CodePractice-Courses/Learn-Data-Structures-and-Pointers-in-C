/* **********************************************
* Working with Arrays version 2
*********************************************** */

#include <stdio.h>

int main()
{
    float highscores[]={100.1,99.4,224.2,23.4,56.7};
    int i;


    puts("Here are the highest scores recorded:");

    for (i=0; i<5; i++)
    {
        printf("Score #%d is %.2f. \n",i+1, highscores[i]);
    }

    return (0);
}
