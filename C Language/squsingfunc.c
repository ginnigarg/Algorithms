#include<stdio.h>
int main()
{
	int num;
	float sq;
	printf ("Enter the number : ");
	scanf ("%d",&num);
	sq=sqf(num);
	printf ("%f",sq);
}
float sqf(float a)
{
	float ans;
	ans=a*a;
	return ans;
}
