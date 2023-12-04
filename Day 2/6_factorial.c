#include <stdio.h>
int calculate_factorial(int n);

void main(void) {
// Declare values
    int num;
    
// Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
// Calculate factorial
    printf("Factorial is: %d\n", calculate_factorial(num));
}
int calculate_factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calculate_factorial(n - 1);
    }
}