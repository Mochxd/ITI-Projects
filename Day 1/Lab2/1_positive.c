#include <stdio.h>

void main(void) {
    // Declare a variable to store the number
    float number;

    // Get user input for a number  
    printf("Enter a valid number: ");
    scanf("%f", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
}
