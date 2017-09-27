#include<stdio.h>
int main()
{
	int size;
	printf ("Enter the size of the array : ");
	scanf ("%d",&size);
	int arr[size];
	printf ("Enter the elements of arrays : \n");
	for (int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int *j;
	j=&arr[0];
	for (int i=0;i<size;i++)
	{
		printf ("Address of element at %d : %d\n",i+1,j);
		printf ("Element at %d : %d\n",i+1,*j);
		j++;
	}
}
