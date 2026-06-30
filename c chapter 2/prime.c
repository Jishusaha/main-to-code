#include <stdio.h>
int main()
{
    int num, i, p = 1; // Assume the number is prime initially
    // Input from the user
    printf("Enter an integer:");
    scanf("%d", &num);
    // Handle edge cases
    if (num <= 1)
    {
        p = 0; // Numbers less than or equal to 1 are not prime
    }
    else
    {
        // Check divisors from 2 to num/2
        for(i = 2; i<=num/2; i++)
        {
            if(num % i==0)
            {
                p=0; // Not prime if divisible by any number
                break;
            }
        }
    }
    // Output result
    if(p)
    printf("%d is a prime number.\n", num);
    else
    printf("%d is not a prime number.\n", num);
    return 0;
}
