#include <stdio.h>
#include <stdlib.h>

int max(int *arr, int n);

void main(void) {
// Declare variables
    int n;

// Get the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

// Dynamically allocate memory for the array
    int *array = (int *)malloc(n * sizeof(int));

// Check memory allocation is done correctly
    if (array == NULL) {
        printf("Memory allocation failed. Exiting...\n");
    }

// Get elements from the user and store in the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", array + i);
    }

// Find the maximum element 
    int max_number = max(array, n);
    printf("The maximum element is: %d\n", max_number);

// Free the dynamically allocated memory
    free(array);
}

int max(int *array, int n) {
// declare the first number in array as a max
    int max = *array;

// started with i = 1 as the first number in the declaration of array defined as max
    for (int i = 1; i < n; i++) {  
        if (*(array + i) > max) {
            max = *(array + i);
        }
    }
    return max;
}
