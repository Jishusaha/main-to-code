#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;
    // Declare the array
    int arr[n];


    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    // Input the elements of the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add the elements to sum
    }

    // Calculate the average
    average = sum / n;

    // Output the result
    printf("The average of the array elements is: %.2f\n", average);

    return 0;
}
