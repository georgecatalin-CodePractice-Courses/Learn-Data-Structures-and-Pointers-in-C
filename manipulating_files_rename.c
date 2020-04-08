/* ************************************************
* Manipulating files: RENAME()
* ********************************************* */

#include <stdio.h>

int main()
{
    int r;

    r=rename("mytext.txt","new_name.txt");

    if (r==0)
    {
        printf("Rename was successful.");
    }
    else
    {
        printf("unable to rename");
    }
    
    return (0);
}