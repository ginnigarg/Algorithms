#include <stdio.h>
int main()
{
  int year;
  printf ("Enter the year : ");
  scanf ("%d",&year);
  (year%4!=0)?(printf ("Not a leap Year\n")):(printf("Leap Year\n"));
}
