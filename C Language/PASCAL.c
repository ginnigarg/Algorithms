#include<stdio.h>
int main()
{
  int rows,i,j,y,x=1;
  float a,b;
  printf ("Enter the no. of rows for which you want to see the PASCAL triangle : ");
  scanf ("%d",&rows);
  for (i=0;i<rows;i++)
  {
  	for (y=rows;y>i;y--)
  	{
  		printf (" ");
  	}
  		for (j=0;j<=i;j++)
  		{
  			if (j==0)
  			{
  				x=1;
  			}
  			else
  			{
  				a=i;
  				b=j;
  				x=x*((a-b+1)/b);
  			}
  			printf ("%4d",x);
  		
        }
    printf ("\n");
   }
}
