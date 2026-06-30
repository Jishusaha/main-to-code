#include<stdio.h> 
int factorial(int);
int main()
{
    int num, result;
    printf("Enter the number:");
    scanf("%d", &num);
    result=factorial(num);
    printf("The result is %d=%d", num, result);
}
int factorial(int num)
{
    int i, fact=1;
    for(i=1;i<=num;i++)
    {
    fact=fact*i;
    }
    return(fact);
}    