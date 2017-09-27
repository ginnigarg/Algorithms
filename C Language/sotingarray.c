#include<stdio.h>
int main()
{
	int a,b;
	printf ("Enter the no. of rows and columns of aray with spaces : ");
	scanf ("%d %d",&a,&b);
	int arr[a][b];
	for (int i=0;i<a;i++)
	{
		for (int j=0;j<b;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for (int i=0;i<a;i++)
	{
		for (int j=0;j<b;j++)
		{
			int k=i,l=j;
			for (int x=i;x<a;x++)
			{
				for (int y=((x==i)?j+1:0);y<b;y++)
				{
					if (arr[k][l]>arr[x][y])
					{
						k=x;
						l=y;
					}	
				}
			}
			int x=arr[i][j];
			arr[i][j]=arr[k][l];
			arr[k][l]=x;
		}
	}
	for (int i=0;i<a;i++)
	{
		for (int j=0;j<b;j++)
		{
			printf ("%d ",arr[i][j]);
		}
		printf ("\n");
	}
}
