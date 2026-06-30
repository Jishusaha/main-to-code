#include<stdio.h>
int main()
{
    int i=1,fact=1,num;
    printf("Enter the number:");
    scanf("%d",&num);
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("The factorial of %d is:%d",num,fact);
    return 0;
}