#include <stdio.h>
int main()
{
	int i = 3, *j, **k;
	j = &i;
	k = &j;
	printf ("%d %d %d %d %d\n",i,&i,j,*(&i),*j);
	printf ("%d %d %d %d %d %d %d %d %d %d \n",&i,j,*k,&j,k,*(&i),*j,**k,i,j);
}
