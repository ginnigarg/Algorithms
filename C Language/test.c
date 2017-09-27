#include<stdio.h>
int main()
{
	int y=1;
	if(y | (y=2))
	printf ("true %d",y);
	else
	printf ("false %d",y);
}

