/* ******************************************
* Using Readdir() to read files from the current directory
* ***************************************** */

#include <stdio.h>
#include <dirent.h>

int main()
{
    char dir[]=".";
    struct dirent *file;

    DIR *handler;

    handler=opendir(dir);

    if (handler==NULL )
    {
        printf("Something went wrong");
        return (1);
    }

    file=readdir(handler);

    printf("The file found are '%s' .\n", file->d_name);

    /* *** close the directory *** */
    closedir(handler);

    return (0);
   
}