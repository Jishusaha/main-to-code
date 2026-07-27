#include<stdio.h>

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Selection Sort function
void selectionSort(int arr[], int n) {
    int i, j, small;

    for(i = 0; i < n - 1; i++) {
        small = i;  // Assume the current index has the smallest value

        // Find the index of the smallest element in the unsorted part
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[small])
                small = j;
        }

        // Swap the found smallest element with the first element of unsorted part
        if(small != i)
            swap(&arr[small], &arr[i]);
    }
}

int main() {
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }

    // Apply Selection Sort
    selectionSort(a, n);

    // Output the sorted array
    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
        if(i < n - 1)
            printf(",");
    }
    printf("\n");

    return 0;
}
