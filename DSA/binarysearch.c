#include<stdio.h>
int main()
{
    int l,r,i,n,val,pos=-1;
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
    l=0;
    r=n;
    for(i=0;l<=r;i++)
    {
        int mid=(l+r)/2;
        if(a[mid]==val)
        {
            pos=mid;  // Element found
            break;
        }
        else if(a[mid]<val)
            l=mid+1;  // Search in the right half 
        else 
            r=mid-1;  // Search in the left half
    }
    if(pos!=-1)
        printf("Element found at position:%d\n",pos);
    else
        printf("Element not found\n");
    return 0;
}