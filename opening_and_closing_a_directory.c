/* *****************************************
* Open and close a directory
* *************************************** */

#include <stdio.h>
#include <dirent.h>

int main()
{
    char directory[]=".";
    
    DIR *handler;

    /* *** open the directory with the pointer handler *** */
    handler=opendir(directory);

    if (handler==NULL)
    {
        printf("Something happened and I could not open the directory.");
        return (1);
    }
    
    puts("The directory is opened.");

    closedir(handler);

    return (0);
}