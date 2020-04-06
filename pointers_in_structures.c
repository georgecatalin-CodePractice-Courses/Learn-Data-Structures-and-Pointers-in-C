/* *************************************************
* Understanding pointers in structures
* ************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct person 
    {
        char *name;
        int age;
    } you;

    char buffer[50];

    printf("Enter your name:");
    fgets(buffer,50,stdin);

    you.name= (char *) malloc(strlen(buffer)+1); //length of the string + 1 char for the ending \0;

    if (you.name==NULL)
    {
        printf("Error while reserving the memory");
        exit(1);
    }

    strcpy(you.name,buffer);

    printf("Enter your age:");
    scanf("%d",&you.age);

    printf("Hello, %s. You are %d years old. \n", you.name, you.age);

    return (0);
    
}