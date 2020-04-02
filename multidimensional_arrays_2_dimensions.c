/* ***********************************************
* Working with multidimensional arrays
* ********************************************** */

#include <stdio.h>

int main()
{
    char tictactoe[3][3];
    int x, y;

    /* **** initialize ***** */
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            tictactoe[x][y]='.';
        }
    }

    /* ***** show on screen ****** */
    for ( x = 0; x < 3; x++)
    {
        for ( y = 0; y < 3; y++)
        {
            printf("%c",tictactoe[y][x]);
        }
         putchar('\n');
    }
    
    return (0);
}
