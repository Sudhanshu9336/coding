#include <stdio.h>

// Function to insert an element at the end of an array
void insertAtEnd(int arr[], int size, int element) {
    // Check if the array is already full (you may want to handle resizing in a real-world scenario)
    if (size >= 20) {
        printf("Array is full, cannot insert element.\n");
        return;
    }

    // Insert the element at the end
    arr[size] = element;
}

// Function to display the elements of the array
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Maximum size of the array (adjust as needed)


int main() {
    int myArray[20] = {1, 2, 3, 4, 5};
    int size = 5; // Current size of the array

    int newElement = 6;

    // Insert the new element at the end
    insertAtEnd(myArray, size, newElement);
    size++; // Increase the size of the array

    // Display the updated array
    displayArray(myArray, size);

    return 0;
}
