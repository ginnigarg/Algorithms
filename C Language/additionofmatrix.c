#include<stdio.h>
int main()
{
	int a,b;
	printf ("Enter the no. of rows and columns of aray with spaces : ");
	scanf ("%d %d",&a,&b);
	int a[a][b],b[a][b];
	printf ("Enter the elements of first array\n");
	for (int i=0;i<a;i++)
	{
		for (int j=0;j<b;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf ("Enter the elements of second array\n"); 
	for (int i=0;i<a;i++)
	{
		for (int j=0;j<b;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for (int i=0;i<a;i++)
	{
		for (int j=0;j<b;j++)
		{
			printf ("%d ",a[i][j]+b[i][j]);
		}
		printf ("\n");
	}
}
