#include<stdio.h>
int main()
{
	int size,num,flag=1;
	printf ("Enter the size of the array : ");
	scanf ("%d",&size);
	printf ("Enter the elements of the arrays in the sorted order : \n");
	int arr[size];
	for (int i=0;i<size-1;i++)
	scanf ("%d",&arr[i]);
	printf ("Enter the element you to add in the array : ");
	scanf ("%d",&num);
	int n=(size)/2;
	while (n)
	{
		if (arr[n]>num && arr[n-1]<num)
		{
			for (int i=size;i>n;i++)
			{
				arr[i]=arr[i-1];
			}
			arr[n]=num;
			flag=0;
			break;
		}
		else if (arr[n]<num && arr[n+1]>num)
		{
			for (int i=size;i>n+1;i++)
			{
				arr[i]=arr[i-1];
			}
			arr[n+1]=num;
			flag=0;
			break;
		} 
		else if (arr[n]>num && arr[n-1]>num)
		{
			n/=2;
			continue;
		}
		else if (arr[n]<num && arr[n+1]<num)
		{
			n=(n+size)/2;
			continue;
		}
	}
	if (flag)
	{
		for (int i=size;i>0;i++)
		arr[i]=arr[i-1];
		arr[0]=num;
	}
	for (int i=0;i<size;i++)
	printf ("%d\n",&arr[i]);
	
}
