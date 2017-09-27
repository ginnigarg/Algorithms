#include<stdio.h>
int series(int);
int main()
{
  int num;
  printf ("Enter the number till which you want to see the series : ");
  scanf("%d",&num);
  series (num);
}
int series (d)
{
  int a=0,b=1,c=0,sum;	
  while(c<=d)
   {
     sum=sum+c; 
     c=a+b;
     b=a;
     a=c;        
   }
   printf ("%d",sum);

}
