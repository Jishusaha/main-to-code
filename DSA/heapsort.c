#include<stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to heapify a subtree rooted at index i
void heapify(int arr[], int n, int i) {
    int largest = i;          // Initialize largest as root
    int left = 2 * i + 1;     // left child
    int right = 2 * i + 2;    // right child

    // If left child is larger than root
    if(left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if(right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if(largest != i) {
        swap(&arr[i], &arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// Heap Sort function
void heapSort(int arr[], int n) {
    // Build a max heap
    for(int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract elements from heap
    for(int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(&arr[0], &arr[i]);

        // Call heapify on the reduced heap
        heapify(arr, i, 0);
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

    // Apply Heap Sort
    heapSort(a, n);

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
