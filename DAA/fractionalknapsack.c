#include<stdio.h>
int main()
{
    int i,j,n,capacity;
    float arr[100][10],temp;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter item number, weight, profit:\n");
        for(j=0;j<3;j++)
        {
            scanf("%f",&arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        arr[i][3]=arr[i][2]/arr[i][1];
        printf("Per unit cost %d is %f\n",i,arr[i][3]);
    }
    printf("Enter knapsack capacity:\n");
    scanf("%d",&capacity);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i][3]<arr[j][3])
            {
                for(int k=0;k<4;k++)
                {
                    temp=arr[i][k];
                    arr[i][k]=arr[j][k];
                    arr[j][k]=temp;
                }
            }
        }
    }
    float totalprofit=0.0;
    for(i=0;i<n;i++)
    {
        if((int)arr[i][1]<=capacity)
        {
            capacity-= (int)arr[i][1];
            totalprofit+=arr[i][2];
        }
        else
        {
            totalprofit+=arr[i][3]*capacity;
            break;
        }
    }
    printf("Maximum profit for the given capacity: %.2f\n",totalprofit);
    return 0;
}