#include<stdio.h>
int main()
{
	float a=1.23456;
	double b=0.0;
	b=(double)a;
	printf ("%0.12f %0.12lf",a,b);
}
