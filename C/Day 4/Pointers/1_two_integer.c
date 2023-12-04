#include <stdio.h>

void main(void){
    
// Declare variables
    int num1, num2;

// Input the first number
    printf("Enter the first integer: ");
    scanf("%d", &num1);

// Input the second number
    printf("Enter the second integer: ");
    scanf("%d", &num2);

// print the sum of two numbers
    printf("Sum is: %d\n", *&num1 + *&num2);
}
