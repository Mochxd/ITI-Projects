#include <stdio.h>

int sum_Rec(int n); 

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

// call the function sumRecursive and print the result
    int result = sum_Rec(n);
    printf("Sum of first %d natural numbers: %d\n", n, result);

    return 0;
}

int sum_Rec(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum_Rec(n - 1);
    }
}
