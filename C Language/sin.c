#include<stdio.h>
int main()
{
  float x,ans=-1,i,y;
  int n,fact=1; 
  printf ("Enter the value in degrees : ");
  scanf ("%f",&x);
  printf ("Enter the accuracy : ");
  scanf ("%d",&n);
  y=x;
  x=x*(3.14/180);
  for (i=1;i<n;i++)
  {
   ans=ans*(-1);
  }
  printf ("%f %f",x,ans);
  for (i=2;i<=(2*n-1);i++)
  {
   x=x*x;
  }
  printf ("%f",x);
  ans=ans*x;
  for (i=(2*n-1);i>1;i--)
  {
   fact=fact*i;
  }
  printf ("%f",x);
  ans=ans/fact;
  x=x*(180/3.14);
  printf ("sin of %f is %f",y,ans);
}
