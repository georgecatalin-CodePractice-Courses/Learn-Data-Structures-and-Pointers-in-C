/* ******************************************
* Using Readdir() to read all files from the current directory
* ***************************************** */

#include <stdio.h>
#include <dirent.h>

int main()
{
    char dir[]=".";
    DIR *handler ; //pointer handler for the opendir() &closedir() functions
    struct  dirent *file; //structure of pointers to store data about files in the directory open


    /* *** open directory *** */
    handler=opendir(dir);

    if (handler==NULL)
    {
        printf("Something went wrong with opening the directory");
        return (1);
    }
    
    /* *** Read all files from the directory *** */


    while ((file=readdir(handler))!=NULL)
    {
        printf("I found this file %s \n", file->d_name);
    }
    
    /* **** close the directory **** */
    closedir(handler);

    return (0);
}