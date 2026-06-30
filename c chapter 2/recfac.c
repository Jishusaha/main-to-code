#include<stdio.h> 
int rec(int);
int main()
{
    int num, result;
    printf("Enter the number:");
    scanf("%d", &num);
    result=rec(num);
    printf("The value is %d=%d", num, result);
    return 0;
}
int rec(int num)
{
    int f;
    if(num==1)
    return 1;
    else
    f=num*(rec(num-1));
    return(f);
}