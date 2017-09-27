#include <stdio.h>
int main()
{
  int a=1,b=0,i,j,k;
  for (i=0;i<4;i++)
   {
     for (j=0;j<7;j++&&a<=10)
      {
        for (k=3;k>b;k--)
         {
           printf (" ");
         }
        printf ("%d",a);
        a++;
        b--;
        printf ("\n");
      }
     
   }
}
