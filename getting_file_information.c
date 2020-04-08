/* *********************************************************************
* Getting file information
* ******************************************************************* */

#include <stdio.h>
#include <sys/stat.h>
#include  <time.h>

int main()
{
    const char filename[]="alpha.txt";
    struct stat properties;

    stat(filename,&properties);

    printf("I have found the size of the file '%s' is %lu bytes. \n", filename,properties.st_size);

    printf("The file was modified last time on %s . \n", ctime(&properties.st_mtime));

    return (0);
}