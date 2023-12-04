#include <stdio.h>

void main(void) {
    int n;

// Get the amount of numbers
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];
// Input elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

// Print the elements
    printf("Array Elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}
