#include <stdio.h>
int main()
{
  int num,i;
  printf ("Enter the number of which you want to see the table :" );
  scanf ("%d",&num);
  for (i=1;i<=10;i++)
   {
     printf ("%d * %d = %d\n",num,i,num*i);
   }
}
