/* ****************************************************************
* Using a structure of type pointer which has an element of type pointer
* *************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct person
    {
        char *name;
        int age;
    } *you;

    char buffer[50];

  

    you = (struct person *) malloc(sizeof(struct person) *1);
     
     if (you == NULL)
     {
         printf("Error when allocating memory.");
         exit(1);
     }
    
    printf("Enter your name:");
    fgets(buffer,60,stdin);

    you->name= (char *) malloc(sizeof(buffer));

    if (you->name==NULL)
    {
        printf("Error when allocating memory.");
        exit(1);
    }
    

     strcpy(you->name,buffer);

    printf("Enter your age:");
    scanf("%d", &you->age);

    printf("You typed: %s",you->name);
    printf("You have %d age", you->name);

     return(0);
}