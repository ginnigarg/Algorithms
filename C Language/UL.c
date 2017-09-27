#include<stdio.h>
int main()
{
  char a;
  printf ("Enter the character : ");
  scanf ("%c",&a);
  if (a>=65 && a<=90)
    {
      printf ("Upper Case");
    }
  if (a>=97 && a<=122)
    {
      printf ("Lower Case");
    }
}
