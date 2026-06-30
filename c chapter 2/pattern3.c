#include<stdio.h>
int main()
{
    for(int i=1; i<=3; i++) // Outer loop for rows
    { 
        for(int j=1; j<=i; j++) // Inner loop for printing numbers
        {
            printf("%d", j); // Print the current column number
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}