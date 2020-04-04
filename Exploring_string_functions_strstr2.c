/* **********************************************************************
* Exploring string functions strstr()
************************************************************************ */

#include <stdio.h>
#include <string.h>

int main()
{
    char needle[]="heart";
    char haystack[]="You have a big heart.";
    char *found;

    found=strstr(haystack,needle);

    if (found==NULL)
    {
        printf("The string \"%s\" has not been found in string \"%s\". \n",needle,haystack);
    }
    else
    {
        printf("The string \"%s\" has been found in string \"%s\" at offset %ld. \n",needle,haystack, haystack-found);
    }
    
    return (0);

}