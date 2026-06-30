#include<stdio.h>
int main()
{
    int i=1,sum=0;
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of first 10 number:%d",sum);
}