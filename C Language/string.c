#include<stdio.h>
#include<string.h>
int main()
{
	char c[100],i=0;
	while ((c[i]=getchar())!='\n')
	{
		i++;
	}
	c[i]='\0';
	printf ("%s",c);
}
