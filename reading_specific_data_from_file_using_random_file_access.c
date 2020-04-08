/* ***************************************** 
* Reading specific data from file
* **************************************** */

#include <stdio.h>

int main()
{
    const char filename[]="presidents.dat";
    FILE *handler;

    struct person
    {
        char name[32];
        int inauguration;
        int age;
    } president;

    int i;


    /* *** open file *** */
    handler=fopen(filename,"r");

    if (handler==NULL)
    {
        printf("Error when reading file '%s'", filename);
        return (1);
    }
    
    /* *** prompt which record to read *** */
    printf("Enter the record to read (1..10)");
    scanf("%d",&i);

    /* *** validate input *** */
    if (i<1 || i>10)
    {
        printf("You gave a wrong value %d", i);
        return (1);
    }
    
    /* *** decrement i so to match array offset - starts from 0 *** */
    i--;

    /* *** set the file position indicator *** */
    fseek(handler,sizeof(struct person)*i,SEEK_SET);
   
   /* *** fetch the record *** */
   fread(&president,sizeof(struct person),1, handler);
    
    /* *** print to standard output *** */
    printf("%s \t %d \t %d" ,president.name,president.inauguration,president.age);

    return (0);
}