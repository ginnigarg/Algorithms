#include<stdio.h>
int main()
{
  int x;
  printf ("Enter the number : ");
  scanf ("%d",&x);
  int i=0; 
  while (x%i!=0);
  {
  i++
  } 
  if (x==1||x==i)
  {
    printf ("Not Prime");
  }
  else 
  {
    printf ("Prime");
  }
}
