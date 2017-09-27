#include<stdio.h>
int main()
{
	int a[]={10,20,30,45,67,56,74};
	int *i,*j;
	i=&a[1];
	j=&a[5];
	printf ("%d %d\n",j-i,*j-*i);
}
