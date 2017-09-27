#include<stdio.h>
int main()
{
  int num,a=0,b=1,c;
  printf ("Enter the number till which you want to see the series : ");
  scanf("%d",num);
  while(c<num)
   {
     printf ("%d %d "a,b);
     c=a+b;
     b=a;
     a=c;    
   }
}
