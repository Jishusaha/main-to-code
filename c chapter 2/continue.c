#include <stdio.h>
int main() 
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue; // Skip the rest of the code when i is 3
        }
        printf("i = %d\n", i);
    }
    return 0;
}