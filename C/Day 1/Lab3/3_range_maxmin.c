#include <stdio.h>

int main() {

// Declare variables  
    int n;
    float num, min, max;

// Get the amount of number
    printf("Enter the number of float numbers: ");
    scanf("%d", &n);

// check if the user input invalid numbers
    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer for the number of float numbers.\n");
        return 1;
    }

    printf("Enter float number 1: ");
    scanf("%f", &num);
    min = max = num;

// Get the numbers from user
    for (int i = 2; i <= n; ++i) {
        printf("Enter float number %d: ", i);
        scanf("%f", &num);

// Update min and max
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }
    printf("Range of the entered numbers: %.2f\n", max - min);
    return 0;
}
