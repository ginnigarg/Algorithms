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
		for (int j=0;j<size-i-1;j++)
		{
			if (arr[j]>arr[j+1])
			{
				int k;
				k=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=k;
			}
		}
	}
	for (int i=0;i<size;i++)
	{
		printf ("%d ",arr[i]);	
	}
	printf ("\n");
	
}
