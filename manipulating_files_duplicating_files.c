/* ******************************************
*  Building your own code to duplicate an existing file
* ****************************************** */

#include <stdio.h>

int main()
{
    const char original[]="original.txt";
    const char duplicate[]="duplicate.txt";

    FILE *original_handler;
    FILE *duplicate_handler;

    original_handler=fopen(original,"r");
    duplicate_handler=fopen(duplicate,"w");

    if (original_handler==NULL || duplicate_handler==NULL)
    {
        printf("Something does not go well with the duplication.");
        return (1);
    }

    while (1)
    {
        char c=fgetc(original_handler);
        if (c == EOF)
        {
            break;
        }
        fputc(c,duplicate_handler);
    }
    
    return (0);
}