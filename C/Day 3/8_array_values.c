#include <stdio.h>

void array_values(int arr[], int size);

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
    printf("numbers in array: \n");
    array_values(Array, size);
}
void array_values(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}
