#include <stdio.h>

void main(void) {

// Declare values
    int n;

// Get the amount of numbers from user
    printf("Enter the number of integers: ");
    scanf("%d", &n);

// check if the user input less than 3 numbers
    if (n < 3) {
        printf("Please enter at least three integers for a valid range.\n");
        return 1;
    }

// Array to store numbers from the user
    int numbers[n];

// Get the integers numbers from the user
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

// Find the minimum and maximum values
    int min = numbers[0];
    int max = numbers[0];

    for (int i = 1; i < n; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

// Print the range 
    printf("Range without the two extremes: ");
    for (int i = 0; i < n; i++) {
        if (numbers[i] != min && numbers[i] != max) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");
}
