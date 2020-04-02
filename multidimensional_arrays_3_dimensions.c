/* ***********************************************
* Working with multidimensional arrays 3 dimensions
* ********************************************** */

#include <stdio.h>

int main()
{
    char tictactoe[3][3][3];
    int x, y,z;

    /* **** initialize ***** */
    for (x = 0; x < 3; x++)
	{
		for (y = 0; y <3 ; y++)
		{
			for (z = 0; z < 3; z++)
			{
				tictactoe[x][y][z]='.';
			}
		}
	}

    /* ***** show on screen ****** */
    for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			for (z = 0; z < 3; z++)
			{
				printf("%c",tictactoe[x][y][z]);
			}
		}
	}
    
    
    
    
    return (0);
}
