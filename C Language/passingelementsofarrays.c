#include<stdio.h>
int func (int x)
{
	return (2*x);
}
int main()
{
	int size;
	printf ("Enter the size of the array : ");
	scanf ("%d",&size);
	int arr[size];
	printf ("Enter the elements of arrays :\n");
	for (int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		arr[i]=func(arr[i]);
	}
	for (int i=0;i<size;i++)
	{
		printf ("%d\n",arr[i]);
	}
}
