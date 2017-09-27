#include<stdio.h>
int main()
{
	int size;
	printf ("Enter the size of the array");
	scanf ("%d",&size);
	int arr[size];
	for (int i=0;i<size;i++)
	{
		printf ("Enter the element no. %d",i+1);
		scanf ("%d",&arr[i]);	
	}
	int count1=0,count2=0,count3=0,count4=0,count5=0;
	for (int i=0;i<size;i++)
	{
		if (arr[i]%2==0)
		count1++;
		else
		count2++;
		if (arr[i]>0)
		count3++;
		else if (arr[i]<0)
		count4++;
		else
		count5++;
	}
	printf ("Even Numbers : %d\nOdd NUmbers : %d\nPositive NUmbers : %d\nNegative Numbers : %d\nNo. of zeros : %d\n",count1,count2,count3,count4,count5);
}
