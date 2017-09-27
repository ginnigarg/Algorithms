#include <stdio.h>
#include <math.h>
int no_of_dig(int num)
{
    int count=0;
    while(num)
     {
         count++;
         num/=10;
     }
    return count;
}
int main()
    {
        int num,sum=0,temp,a,dig;
        printf("Enter number : ");
        scanf("%d",&num);
	int num1=num;
        dig=no_of_dig(num);
        temp=num;
        while(temp)
        {
            a=temp%10;
            sum+= pow(a,dig);
            temp/=10;
        }
        if(sum==num)
        {
            printf("%d is Armstrong number\n",num1);
        }else
        {
            printf("%d is not a Armstrong number\n",num1);
        }
        return 0;
    }
