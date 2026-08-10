#include<stdio.h>
int main()
{
    int arr[3][2]={{1,2},{3,4},{5,6}};
    int i,j;
    printf("The matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}