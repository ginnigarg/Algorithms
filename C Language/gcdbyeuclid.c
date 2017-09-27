#include<stdio.h>
int gcd(int num1, int num2)
{
    int rem;
    while (rem>0)
        {
            rem=num2%num1;
            num2=num1;
            num1=rem;
        }
    return num2;
}
int main()
{
    int a,b,ans;
    printf ("Enter the number : ");
    scanf ("%d %d",&a,&b);
    if (a>b)
    {
        ans=gcd(a,b);
    }
    else
    {
        ans=gcd(b,a);
    }
    printf ("GCD of %d and %d is %d\n",a,b,ans);
}
