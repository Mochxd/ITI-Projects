#include <stdio.h>

int sum_Rec(int arr[], int size);
void main(void) {

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

// Calculate sum using Recusion
    int sum = sum_Rec(Array, size);
    printf("The sum of numbers is: %d\n", sum);
}
int sum_Rec(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    return arr[size - 1] + sum_Rec(arr, size - 1);
}
