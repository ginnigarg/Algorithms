#include<stdio.h>
int main()
{
	int num,b;
	printf ("Enter the number : ");
	scanf ("%d",&num);
	b=fact(num);
	printf ("%d",b);
}
int fact (int a)
{
	int fact;
	fact=a;
	for (a=a-1;a>1;a--)
	{
		fact=fact*a;
	}
	return fact;
}
