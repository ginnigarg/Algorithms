#include<stdio.h>
#include<math.h>
int main()
{
	int i=1,j=0,arr[100];
	while (j<100)
	{
		arr[j++]=pow(5,i++);
		int a=j-1;
		for (int x=0;x<a;x++)
		{
			arr[j++]=arr[a]+arr[x];
			if (j>=100)
			{
				break;
			}
	}
	for (int x=0;x<100;x++)
	printf ("%d\n",arr[x]);
}
