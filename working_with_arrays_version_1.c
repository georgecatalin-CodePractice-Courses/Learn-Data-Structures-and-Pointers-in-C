/* **********************************************
* Working with Arrays version 1
*********************************************** */

#include <stdio.h>

int main()
{
    float highscores[5];
    int i;

    highscores[0]=100.9;
    highscores[1]=99.1;
    highscores[2]=97.4;
    highscores[3]=99.7;
    highscores[4]=102.5;

    puts("Here are the highest scores recorded:");

    for (i=0; i<5; i++)
    {
        printf("Score #%d is %.2f. \n",i+1, highscores[i]);
    }

    return (0);
}
