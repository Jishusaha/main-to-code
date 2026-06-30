#include<stdio.h>
int swapref();
int main()
{
int a,b;
printf("Enter a and b for call by reference:");
scanf("%d%d",&a,&b);
swapref(&a,&b);
printf("After swapping a=%d b=%d\n",a,b);
}
int swapref(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("x=%d y=%d\n",*x,*y);
}