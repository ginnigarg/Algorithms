#include <stdio.h>
int main()
{
 int a,i;
 for (a=1;a<200;a++)
  {
    i=1;
    while (a%i!=0 && a>a/2)
     {
      i++;
      if (a==1 || a==i)
       {
       printf ("%d\n",a);
       break;
       }
     } 
  }
}
