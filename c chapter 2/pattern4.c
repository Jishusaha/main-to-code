#include<stdio.h>
int main()
{
    for(int i=1; i<=3; i++) // Outer loop for rows
    { 
        for(int j=i; j<i+3; j++) // Inner loop for printing numbers
        {
            printf("%d", j); // Print the current number
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}