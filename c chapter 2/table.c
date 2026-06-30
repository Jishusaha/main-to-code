#include<stdio.h>
int main()
{
    int i=1,m,num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Table of %d is:\n",num);
    while(i<=10)
    {
        m=i*num;
        printf("%d*%d=%d\n",num,i,m);
        i++;
    }
}