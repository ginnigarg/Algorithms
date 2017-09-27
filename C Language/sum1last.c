#include <stdio.h>
int main ()
{
 int num,sum;
 printf ("Enter the number : ");
 scanf ("%d",&num);
 sum=(num%10)+(num/1000);
 printf ("%d",sum);
 return 0;
 
}
