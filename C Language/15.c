#include <stdio.h>
int main ()
{
 int num,sum=0,b;
 printf ("Enter the number : ");
 scanf ("%d",&num);
 b=num%10;
 sum=(sum*10)+b;
 num=num/10;
 b=num%10;
 sum=(sum*10)+b;
 num=num/10;
 b=num%10;
 sum=(sum*10)+b;
 num=num/10;
 b=num%10;
 sum=(sum*10)+b;
 printf("%d",sum);
 return 0;
 
}
