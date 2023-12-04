#include <stdio.h>

void swap(int *a, int *b);
void main(void) {

// Declare variabeles
    int num1, num2;

// Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

// Before swapping
    printf("Before swapping: \n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    swap(&num1, &num2);

// After swapping
    printf("\nAfter swapping: \n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}