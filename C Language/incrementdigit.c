#include <stdio.h>
int main ()
{ 
 int a,b,c=0;
 printf ("Enter the number : ");
 scanf ("%d",&a);
 b=a%10;
 b++;
 c=c+b;
 a=a/10;
 b=a%10;
 b++;
 c=c+(b*10);
 a=a/10;
 b=a%10;
 b++;
 c=c+(b*100);
 a=a/10;
 b=a%10;
 b++;
 c=c+(b*1000);
 printf ("%d",c);
 return 0;
 
 
}
