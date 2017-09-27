#include<stdio.h>
int fact (int);
int main()
{
	int num,facto;
	printf ("Enter the first number : " );
	scanf ("%d",&num);
	facto=fact(num);
	printf ("%d\n",facto);
}
int fact(a)
{
	int ans=1;
	for (int i=1;i<=a;i++)
	{
		ans=ans*i;
	}	
	return ans;
}
