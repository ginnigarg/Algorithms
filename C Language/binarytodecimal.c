#include<stdio.h>
#include<math.h>
int main()
        {
         int num,c=0,result,rem,b_num=0,i=0;;
         printf("Enter the number to be converted to binary : ");
         scanf("%d",&num);
	 int num1=num;	
	 while(num)
            {
             rem=num%2;
             num=num/2;
             b_num=b_num+rem*pow(10,i);
             i++;            
	    }
        printf("Binary of %d is %d\n",num1,b_num);
	printf ("Enter the number to be converted to decimal : ");
	scanf ("%d",&result);
	num1=result;
	int r,j=0,d_num=0;
            while(result)
            {
             r=result%10;
             result/=10;
             d_num=d_num+r*pow(2,j);
             j++;            
	    }
            printf("Decimal of %d is %d\n",num1,d_num);
         return 0;
        }
