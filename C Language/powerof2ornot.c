#include <stdio.h>
    int main()
    {
        int num,count=0,num1;
        printf("Enter number : ");
        scanf("%d",&num);
	num1=num;
	while(num)
        {
            if(num&1==1)
            {
                count++;
            }
            num>>=1;
        }
        if(count==1)
        {
            printf("%d is powerof 2\n",num1);
        }else
        {
            printf("%d is not power of 2\n",num1);
        }
        return 0;
    } 

