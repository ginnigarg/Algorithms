#include<stdio.h>

int main()
{
	int size;
	printf ("Enter the size of the array : ");
	scanf ("%d",&size);
	int arr[size];
	for (int i=0;i<size;i++)
	{
		printf ("Enter the element no. %d : ",i+1);
		scanf ("%d",&arr[i]);	
	}
	for (int i=0;i<size-1;i++)
	{
		int max=0;
		for (int j=1;j<size-i;j++)
		{
			if (arr[max]<arr[j])
			{
				max=j;
			}
		}
		int k=arr[max];
		arr[max]=arr[size-i-1];
		arr[size-i-1]=k;
	}
	for (int i=0;i<size;i++)
	{
		printf ("%d ",arr[i]);	
	}
	printf ("\n");
	
}
