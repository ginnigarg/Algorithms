#include<stdio.h>
int main()
{
  int num,fact=1,num1;
  printf ("Enter the number : ");
  scanf ("%d",&num);
  num1=num;
  for(num;num>=1;num--)
    {
      fact=fact*num;
    }
  printf ("Factorial of %d is %d\n",num1,fact);
  return 0;
}
