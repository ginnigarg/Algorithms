#include<stdio.h>
int main()
{
	int tc;
	scanf ("%d",&tc);
	for (int i=0;i<tc;i++)
	{
		int num,count=1,flag=1;
		scanf ("%d",&num);
		int rem=num;
		while (rem>0)
		{
			rem=rem-12;
			if (rem%10==0)
			{
				printf ("%d\n",count+(rem/10));
				flag=0;
			}
			count++;
		}
		
		if (flag)
		{	
			count=1;
			rem=num;
			while (rem>0)
			{
				rem=rem-10;
				if (rem%10==0)
				{
					printf ("%d\n",count+(rem/12));
					flag=0;
				}
				count++;	
			}
		}
		if (flag)
		{
			printf ("-1\n");
		}
	}
	
}

