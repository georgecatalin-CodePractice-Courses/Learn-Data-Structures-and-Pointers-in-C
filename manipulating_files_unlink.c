/* ************************************************
* Manipulating files: UNLINK()
* ********************************************* */

#include <stdio.h>
#include <unistd.h>

int main()
{
    int r;

    r=unlink("new_name.txt");

    if (r==0)
    {
        printf("Deletion of file '%s' was successful. \n","new_name.txt");
        
    }
    else
    {
        printf("Ooops..something is wrong.");
    }
    
    return (0);
}