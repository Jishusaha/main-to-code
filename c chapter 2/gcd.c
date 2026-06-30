#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    printf("GCD of %d and %d is: %d\n",num1,num2,GCD(num1,num2));
}
int GCD(int a,int b)
{
    int rem;
    rem=a%b;
    if(rem==0)
    return b;
    else
    return (GCD(b,rem));
}