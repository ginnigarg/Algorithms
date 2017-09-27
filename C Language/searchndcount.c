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
	int num,count=0;
	printf ("Enter the element you want to search : ");
	scanf ("%d",&num);
	for (int i=0;i<size;i++)
	{
		if (arr[i]==num)
		{
			count++;
		}
	}
	if (count)
	{
		printf ("%d is the array %d times\n",num,count);
	}
	else
	{
		printf ("%d does not exist in the array\n",num);
	}
}
