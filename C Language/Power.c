#include<stdio.h>
int main()
{
  int a,b,c;
  printf ("Enter the base : ");
  scanf ("%d",&a);
  printf ("Enter the exponent : ");
  scanf ("%d",&b);
  c=a;
  while (b!=1)
    {
      c=c*a;
      b--;
    } 
  printf ("%d\n",c); 
  
}
