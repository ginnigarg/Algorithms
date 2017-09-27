#include<stdio.h>
int main()
{
	int size,num,flag=0;
	printf ("Enter the size of the array : ");
	scanf ("%d",&size);
	int arr[size];
	for (int i=0;i<size;i++)
	scanf ("%d",&arr[i]);
	printf ("Enter the number you want to search : ");
	scanf ("%d",&num);
	int n=(size-1)/2;
	while (n)
	{
		if (arr[n]==num)
		{
			flag=1;
			break;
		}
		else if (arr[n]>num)
		{
			n=(n+size)/2;
			continue;
		}
		else
		{
			n/=2;
			continue;
		}
	}
	if (flag)
	printf ("%d is in the array\n",num);
	else
	printf ("%d is not in the array\n",num);
}
