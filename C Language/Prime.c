#include<stdio.h>
int main()
{
  int x,i=2;
  printf ("Enter the number : ");
  scanf ("%d",&x);
  while (x%i != 0 && x>x/2)
    {
      i++;
    }
  if (x==1||x==i)
    {
      printf ("Prime");
    }
  else 
    {
      printf ("Not Prime");
    }
}
