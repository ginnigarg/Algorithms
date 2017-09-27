#include<stdio.h>
int main ()
{
	int a,b,c=0;
	printf ("Enter the number : ");
	scanf ("%d",&a);
	int i=0;
	while (c<2&&i<32)
	{
		if (a&1==1)
		{	
		c=c+1;
		}
		a=a>>1;
		i++;
	}
	if (c==1)
	{
		printf ("Power of 2");
	}
	else 
	{
		printf ("Not a power of 2");
	}
}
