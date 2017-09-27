#include<stdio.h>
#define CUBE(x) (x*x*x)
int main()
{
	int num=3;
	int ans=CUBE(num++);
	printf ("%d %d",ans,num);
}
