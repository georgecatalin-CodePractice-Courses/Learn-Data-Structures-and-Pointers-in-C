/* **************************************
* Reading the file path 
* ************************************** */

#include <stdio.h>
#include <unistd.h>

int main()
{
    char working_directory[512];

    getcwd(working_directory,512);

    printf("The current working directory is '%s' ,",working_directory);

    return (0);

}