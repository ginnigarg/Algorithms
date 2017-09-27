#include <stdio.h>
int main ()
{
  int input;
  printf ("Enter the number in decimal : ");
  scanf ("%d",&input);
  printf ("%d (which is in decimal form) is %x in hexadecimal form and %o in octal form ",input,input,input);
  return 0;
  
}
