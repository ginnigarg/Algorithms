#include<stdio.h>
int main()
{
  int num1,num2,ans=0;
  printf ("Enter the number : ");
  scanf ("%d",&num1);
  while (num1!=0)
    {
      num2=num1%10;
      ans=(ans*10)+(num2);
      num1=num1/10;
    }
  printf ("%d",ans);
}
