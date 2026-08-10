#include<stdio.h>

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function for Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // pivot element
    int i = low - 1;

    for(int j = low; j < high; j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    // Place pivot at the correct position
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high); // Partitioning index
        quickSort(arr, low, pi - 1);        // Sort elements before partition
        quickSort(arr, pi + 1, high);       // Sort elements after partition
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

    // Apply Quick Sort
    quickSort(a, 0, n - 1);

    // Output the sorted array
    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
        if(i < n - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}
