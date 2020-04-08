/* *******************************************************************
* Getting information about files in a directory , including whether is a file or a directory
* ******************************************************************* */

#include <stdio.h>
#include <sys/stat.h>
#include <time.h>
#include <dirent.h>

int main()
{
    DIR *handle;
    struct dirent *file;
    struct stat properties;


    handle=opendir(".");

    if(handle==NULL) 
    {
        printf("Something went wrong.");
        return (1);
    }

    

    while ((file=readdir(handle))!=NULL)
    {
       stat(file->d_name,&properties);
       if (S_ISDIR(properties.st_mode))
       {
          printf("Dir");
       }
       else
       {
           printf("File");
       }

       printf("%-30s %8lu bytes %-30s . \n", file->d_name,properties.st_size,ctime(&properties.st_mtime));
       
       
       
    }
    
    closedir(handle);
    return (10);
}