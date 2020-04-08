/* ******************************************************
* reading the parent directory path
* ***************************************************** */


#include <stdio.h>
#include <unistd.h>


int main()
{
    char path[512];

    chdir("..");
    getcwd(path,512);

    printf("The parent directory of the directory where this script is saved is '%s' .\n", path);

    return (0);
}