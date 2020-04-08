/* *******************************************************
* Calling the operating system
* ***************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("Press keyboard to clear the screeen.");
    getchar();

    system("clear");

    puts("Screen was cleared.");

    return (0);
}