/* **********************************************
* Modifying arrays example 2
********************************************** */

int main()
{
    int myarray[]={18,20,36,41,50};
    int i, temp;

    puts("Before the modification:");
    for (i=0;i<5;i++)
    {
        printf("%d \n",myarray[i]);
    }

    temp=myarray[3];
    myarray[3]=myarray[2];
    myarray[2]=temp;

    puts("After the modification");
    for (i=0;i<5;i++)
    {
        printf("%d \n",myarray[i]);
    }

    return (0);
}
