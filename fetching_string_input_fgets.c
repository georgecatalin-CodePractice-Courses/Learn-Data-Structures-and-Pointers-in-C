/*  ******************************************
* Fetching string input fgets()
* ****************************************** */

#include <stdio.h>

int main()
{
    char input[10];
    int i;

    printf("Enter your name: \n");
    fgets(input,10,stdin);

for (i = 0; i < 10; i++)
{
    if (input[i]=='\n')
    {
        input[i]='\0';
    }
    
}

    printf("Hello, %s.\n", input);

    return (0);

}