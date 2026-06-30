#include<stdio.h>
int swapvalue();
int main()
{
int a,b;
printf("Enter a and b for call by value:");
scanf("%d%d",&a,&b);
swapvalue(a,b);
printf("After swapping a=%d b=%d\n",a,b);
}
int swapvalue(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
    printf("x=%d y=%d\n",x,y);
}
