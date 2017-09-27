#include <stdio.h>
int main()
{
  int percent;
  printf ("Enter the percentage : ");
  scanf ("%d",&percent);
  if (percent>70)
    {
      printf ("Grade is A");
    }
  else 
    {
      if (percent>60)
        {
          printf ("Grade is B");
        }
      else 
        {
          if (percent>50)
            {
              printf ("Grade is C");
            }
           else 
            {
              printf ("Grade is D");
            }
        }
    }
}
