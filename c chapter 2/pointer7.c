#include<stdio.h>
int main()
{
    int num[3]={10,20,30},*ptr;
    ptr=&num[0];
    printf("%d",*(ptr+2));
}
