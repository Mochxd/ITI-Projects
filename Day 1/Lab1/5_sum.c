#include <stdio.h>

void main(void) {
    
    // Declare the variables
    float num1, num2;

    // Get 2 numbers from the user
    printf("Enter Two integer number: ");
    scanf("%f %f", &num1,&num2);

    // Print the Sum of 2 numbers
    printf("The Sum of numbers is %.2f", num1+num2);
}
