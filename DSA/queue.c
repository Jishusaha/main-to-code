#include<stdio.h>
#define MAX 5
int queue[MAX];
int rear=-1, front=-1;
void insert(int item)
{
    if(front==-1)
    {
        front=0;
        rear=0;
    }
    else if(rear==MAX-1)
    {
        printf("Overflow\n");
        return;
    }
    else
    {
        rear=rear+1;
    }
    queue[rear]=item;
    printf("inserted %d\n",item);
}