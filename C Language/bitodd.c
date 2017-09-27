#include<stdio.h>
int main()
{
	int num;
	printf ("Enter the number : ");
	scanf ("%d",&num);
	printf ("%x\n",num&1);
	if ((num & 1) == 0)
	{
		printf ("%d is even\n",num);
	}
	else 
	{
		printf ("%d is odd\n",num);
	}
}
