#include <stdio.h>

int Sum(int arr[], int size);
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

// Calculate sum using iteration
    int sum = Sum(Array, size);
    printf("The sum of numbers is: %d\n", sum);
}
int Sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
