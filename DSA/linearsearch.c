#include<stdio.h>
int main()
{
    int i,n,val,pos=-1;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        printf("Element %d:",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the value you want to search:");
    scanf("%d",&val);
    for(i=0;i<n;i++)
    {
        if(a[i]==val)
        {
            pos=i;
            break;
        }
    }
    if(pos!=-1)
    printf("Element %d is present in the array at %d position:",val,pos);
    else
    printf("Element is not present");
}
