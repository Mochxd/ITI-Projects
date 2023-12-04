#include <stdio.h>

int sum(int n);
int main() {

// Declare values
    int n;

// Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

// check for invalid input
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

// call the function sum and print the result
    int result = sum(n);
    printf("Sum of first %d natural numbers: %d\n", n, result);
    return 0;
}
int sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
