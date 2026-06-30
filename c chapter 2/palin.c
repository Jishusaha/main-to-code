#include<stdio.h>
int main()
{
    int b,n,r,rev=0;
    printf("Enter the number:");
    scanf("%d",&n);
    b=n;
    while(n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(b==rev)
    printf("The number is palindrome");
    else
    printf("The number is not palindrome");
    return 0;
}