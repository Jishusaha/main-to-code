#include<stdio.h>
int GCD(int,int);
int main()
{
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    printf("GCD of %d & %d is:%d\n",num1,num2,GCD(num1,num2));
}
int GCD(int num1,int num2)
{
    int rem;
    rem=num1%num2;
    if(rem==0)
    return num2;
    else
    return (GCD(num2,rem));
}