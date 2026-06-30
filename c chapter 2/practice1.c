#include<stdio.h>
int main()
{
    int num, i, p=1;
    printf("Enter the integer:");
    scanf("%d",&num);
    if(num<=1)
    {
        p=0;
    }
    else
    {
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                p=0;
                break;
            }
        }
    }
    if(p)
    printf("%d is a prime number\n",num);
    else
    printf("%d is not a prime number\n",num);
    return 0;
}