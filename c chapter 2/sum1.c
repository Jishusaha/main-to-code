#include<stdio.h>
int main()
{
    int m,n,sum=0,count=0;
    printf("Print 1st number:");
    scanf("%d",&m);
    printf("Print 2nd number:");
    scanf("%d",&n);
    if(m>n)
    {
    printf("Error");
    return 1;
    }
    while(count<1)
    {
        sum=m+n;
        count++;
    }
    printf("The sum is:%d",sum);
    return 0;
}