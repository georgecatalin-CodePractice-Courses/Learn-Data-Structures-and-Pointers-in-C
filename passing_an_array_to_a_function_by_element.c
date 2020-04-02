/* *******************************************
* Passing an array to a function by elements
******************************************* */

# include <stdio.h>

void increment_char(char c)
{
    c++;
    putchar(c);
}


int main()
{
  char string[]="George";
  int i;

  for ( i = 0; i < 7; i++)
  {
     increment_char(string[i]);
  }
  
  puts("\n");
  return (0);

}