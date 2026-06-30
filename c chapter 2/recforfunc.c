#include<stdio.h>
int factorial(int);
int main()
{
    int num,result;
    printf("Enter the number:");
    scanf("%d",&num);
    result=factorial(num);
    printf("The result of %d is: %d",num,result);
    return 0;
}
int factorial(int num)
{
    int i,fact=1;
    for(i=num;i>=1;i--)
    {
        fact=fact*i;
    }
    return(fact);
}