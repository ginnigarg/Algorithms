#include <stdio.h>
int main()
{
 int num;
 printf ("Enter the number : ");
 scanf("%d", &num);
 num % 2 == 0 ? printf ("%d is even \n") : printf ("%d is odd \n");
}
