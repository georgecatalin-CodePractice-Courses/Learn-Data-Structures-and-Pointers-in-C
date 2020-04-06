/* ***************************************************
* Using a structure pointer
* ************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct person
    {
        char name[50];
        int age;
    } * you ;

    you=(struct person *) malloc(sizeof(struct person)*1);

    if (you==NULL)
    {
            printf("Error when allocating memory");
            exit(1);
    }
    
    printf("Enter your username: \n");
    fgets(you->name,50,stdin);

    printf("Enter your age");
    scanf("%d",&you->age);

    printf("You entered the name: %s. \n",you->name);
    printf("You entered the age : %8d .\n",you->age);

    return (0);
}