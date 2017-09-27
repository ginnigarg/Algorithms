#include <stdio.h>

	int main()
		{
short int num,lnum,cmp,jasus=0;
printf("Enter a number : ");
scanf("%d",&num);
lnum=num>>1;
cmp=num^lnum;

int i=1;

while(i<=cmp)
{
	if(i==cmp)
{
	jasus=1;
break;
}
i*=2;
}
	if(jasus==1)
{
	printf("yes");
}else
printf("no");

		}
