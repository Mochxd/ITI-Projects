#include <stdio.h>

void main(void) {
    // Declare a variable to store the number
    int number;

    // Get user input for a number  
    printf("Enter a valid number: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number % 2 == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }
}
