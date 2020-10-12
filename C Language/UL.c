#include<stdio.h>
int main()
{
  char a;
  printf ("Enter the character : ");
  scanf ("%c",&a);
  if (a>=65 && a<=90)
    {
      printf ("Is Upper Case");
    }
  if (a>=97 && a<=122)
    {
      printf ("Is Lower Case");
    }
}
