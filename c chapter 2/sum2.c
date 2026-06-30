#include<stdio.h>
int main()
{
    int m,n,sum=0;
    printf("Print 1st number:");
    scanf("%d",&m);
    printf("Print 2nd number:");
    scanf("%d",&n);
    while(m<=n)
    {
        sum=sum+m;
        m++;
    }
    printf("The sum is:%d",sum);
    return 0;
}
