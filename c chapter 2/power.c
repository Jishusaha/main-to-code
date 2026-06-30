#include<stdio.h>
int main()
{
    int num,p,result=1,i=1;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enterb the power:");
    scanf("%d",&p);
    while(i<=p)
    {
        result=result*num;
        i++;
    }
    printf("The result is:%d",result);
    return 0;
}