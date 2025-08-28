#include <stdio.h>

int main() {
    int n, i;
    
    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Get array elements from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the array elements
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Display the sum
    printf("Sum of the array elements: %d\n", sum);

    return 0;
}
