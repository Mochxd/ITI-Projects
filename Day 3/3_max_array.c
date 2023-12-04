#include <stdio.h>

int Max(int arr[], int size);
void main(void) {
    
// Input number of elements
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

// Declare new array to store the values
    int Array[size]; 

// Input array elements
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &Array[i]);
    }
printf("The maximum number in the array is: %d\n", Max(Array, size));
}
int Max(int arr[], int size) {

// Check if the array is empty
    if (size == 0) {
        printf("Error: Array is empty\n");
        return 1;
    }

// Assume the first element is the maximum
    int max = arr[0]; 

// compare the first number with other numbers in array
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
