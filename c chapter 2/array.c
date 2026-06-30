#include<stdio.h>
int i,a[5];
int main()
{
    printf("Enter the elements:\n");
    for(i=0;i<5;i++)
    {
        printf("Enter the value at %d position:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}