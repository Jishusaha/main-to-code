#include<stdio.h> 
int rec(int);
int main()
{
    int num,sum;
    printf("Enter the number:");
    scanf("%d", &num);
    sum=rec(num);
    printf("The value is %d=%d", num, sum);
    return 0;
}
int rec(int num)
{
    int s;
    if(num==1)
    return 1;
    else
    s=num+(rec(num-1));
    return(s);
}