#include<stdio.h>
int swap (int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	return 0;
}
int main()
{
	int num1,num2,temp;
	printf ("Enter the first number : " );
	scanf ("%d",&num1);
	printf ("Enter the second number : " );
	scanf ("%d",&num2);
	swap (&num1,&num2);
	printf ("%d   %d\n",num1,num2);
}
