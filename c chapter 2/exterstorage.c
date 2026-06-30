#include<stdio.h>
void increment();
void decrement();
int i;
int main()
{
    printf("%d\n",i);
    increment();
    increment();
    decrement();
    decrement();
    return 0;
}
void increment()
{
    i=i+1;
    printf("%d\n",i);
}
void decrement()
{
    i=i-1;
    printf("%d\n",i);
}