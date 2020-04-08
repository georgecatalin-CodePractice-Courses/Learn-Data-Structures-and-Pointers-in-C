/* ******************************************************
* Getting information about all files in a directory
* **************************************************** */


#include <stdio.h>
#include <sys/stat.h>
#include <time.h>
#include <dirent.h>

int main()
{
    DIR *handler;
    struct dirent *file;
    struct stat properties;

    handler=opendir(".");

    if (handler==NULL)
    {
        printf("Ooops.. something is not quite right when opening the working directory.");
        return (1);
    }

    while (( file=readdir(handler))!=NULL)
    {
        stat(file->d_name,&properties);
        printf("%-25s %8lu bytes %-30s \n", file->d_name,properties.st_size, ctime(&properties.st_mtime));
    }
    
    closedir(handler);

    return (0);
}