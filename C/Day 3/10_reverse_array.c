#include <stdio.h>

void reverse_array(int arr[], int size);
int main() {
// Input number of elements
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

// Declare new array to store the values
    int Array[size]; 

// Input array elements
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &Array[i]);
    }

// Print original array
    printf("Original Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", Array[i]);
    }
    printf("\n");

// Reverse the array
    reverse_array(Array, size);

// Print reversed array
    printf("Reversed Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", Array[i]);
    }
    printf("\n");

    return 0;
}

void reverse_array(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements 
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // Get the numbers after end and start
        start++;
        end--;
    }
}
