#include<stdio.h>
int func (int *x,int n)
{
	for (int i=0;i<n;i++)
	{
		printf ("%d\n",*x);
		x++;
	}
	return 0;
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
		
	}
	func(&arr[0],size);
	
}
