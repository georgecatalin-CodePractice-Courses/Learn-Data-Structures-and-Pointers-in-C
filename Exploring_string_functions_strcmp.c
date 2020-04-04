/* **********************************************************************
* Exploring string functions strcmp()
************************************************************************ */

#include <stdio.h>
#include <string.h>

int main()
{
    char r[]="red";
    char b[]="blue";
    char g[]="green";

    if (strcmp(r,"blue")==0)
    {
        printf("%s is the same as \"blue\". \n",r);
    }
    if (strcmp(b,"blue")==0)
    {
        printf(" %s is the same as \"blue\". \n",b);
    }
    if (strcmp(g,"blue")==0)
    {
        printf(" %s is the same as \"blue\". \n",g);
    }
    
    return (0);
}