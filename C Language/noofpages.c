#include<stdio.h>
int main()
{
	int tc;
	scanf ("%d",&tc);
	for (int i=0;i<tc;i++)
	{
		int num,count=1,flag=1,a,b;
		scanf ("%d",&num);
		int rem=num;
		while (rem>0)
		{
			rem=rem-12;
			if (rem%10==0)
			{
				a=count+(rem/10);
				flag=0;
			}
			count++;
		}
		count=1;
		if (flag)
		{
			while (rem>0)
			{
				rem=rem-12;
				if (rem%10==0)
				{
					b=count+(rem/10);
					flag=0;
				}
				count++;	
			}
		}
		if (flag)
		{
			printf ("-1\n");
		}
		else
		{
			if (a>b)
			printf ("%d",b);
			else
			printf ("%d",a);
		}
		
	}
	
}

