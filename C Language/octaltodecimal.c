#include<stdio.h>
#include<math.h>
int main()
   {
        int num,c=0,result;
        printf("Enter the number(in decimal form) to be converted from decimal to octal :");
        scanf("%d",&num);
	int num1=num;
	int rem,o_num=0,i=0;
            while(num)
            {
             rem=num%8;
             num=num/8;
             o_num=o_num+rem*pow(10,i);
             i++;
            }
        printf("Octal of %d is %d\n",num1,o_num);
	printf ("Enter the number(in octal form) to be converted from octal to decimal : ");
	scanf ("%d",&result);
	num1=result;
	int r,j=0,d_num=0;
            while(result)
            {
             r=result%10;
             result/=10;
             d_num=d_num+r*pow(8,j);
             j++;
            }
            printf("Decimal form of %d is %d\n",num1,d_num);
         return 0;
        }
