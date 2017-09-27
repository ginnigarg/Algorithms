#include <stdio.h>
int main()
{
 int a,sum=0;
 printf ("Enter the 4 digit number : ");
 scanf ("%d",&a);
 sum=sum+(a%10);
 a=a/10;
 sum=sum+(a%10);
 a=a/10;
 sum=sum+(a%10);
 a=a/10;
 sum=sum+(a%10);
 a=a/10;
 printf ("%d",sum);
}
