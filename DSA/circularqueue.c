Write a program to implement circular queue using array in c.

#include <stdio.h>
#define MAX 5  // Maximum size of the queue

// Declare the queue and front, rear pointers
int queue[MAX];
int front = -1, rear = -1;

// Function to add an element to the circular queue
void enqueue(int value) {
    if ((front == 0 && rear == MAX - 1) || (rear == (front - 1) % (MAX - 1))) {
        printf("Queue is full! Cannot insert %d\n", value);
    } else {
        if (front == -1) { // First element
            front = rear = 0;
        } else if (rear == MAX - 1 && front != 0) {
            rear = 0; // Wrap around
        } else {
            rear++;
        }
        queue[rear] = value;
        printf("Inserted %d into the queue.\n", value);
    }
}

// Function to remove an element from the circular queue
void dequeue() {
    if (front == -1) {
        printf("Queue is empty! Cannot dequeue.\n");
    } else {
        printf("Deleted %d from the queue.\n", queue[front]);
        if (front == rear) { // Only one element was present
            front = rear = -1;
        } else if (front == MAX - 1) {
            front = 0; // Wrap around
        } else {
            front++;
        }
    }
}

// Function to display the elements of the circular queue
void display() {
    if (front == -1) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements are:\n");
        if (rear >= front) {
            for (int i = front; i <= rear; i++)
                printf("%d ", queue[i]);
        } else {
            for (int i = front; i < MAX; i++)
                printf("%d ", queue[i]);
            for (int i = 0; i <= rear; i++)
                printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    int choice, value;

    while (1) {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}