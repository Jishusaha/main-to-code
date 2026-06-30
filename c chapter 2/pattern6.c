#include<stdio.h>
int main()
{
    int i,j,num=1;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3-i;j++)
        {
            printf("");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",num);
            num++;
        }
        num--;
        for(j=1;j<i;j++)
        {
            num--;
            printf("%d",num);
        }
        printf("\n");
        num=i+1;
    }
    return 0;
}