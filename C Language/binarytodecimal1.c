#include<stdio.h>
#include<math.h>
int main()
{
	int n,a=0,i=0,x;
	printf ("Enter the binary number : ");
	scanf ("%d",&n);
	while (n)
	{
		x=n&1;
		a+=x*(pow(2,i));
		i++;
		n=n>>1;
	}
	printf ("%d",a);
	
}
