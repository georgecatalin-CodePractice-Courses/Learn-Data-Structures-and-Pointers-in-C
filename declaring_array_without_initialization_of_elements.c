/* **********************************************
* Modifying arrays example 2
********************************************** */

int main()
{
    int myarray[5];
    int i;

    puts("Before the modification:");
    for (i=0;i<5;i++)
    {
        printf("%d \n",myarray[i]);  // Note: since none of the elements in the array has been initialized it returns whatever garbage is at the location of the variable in memory
    }

    return (0);
}
