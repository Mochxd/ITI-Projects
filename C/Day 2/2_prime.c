#include <stdio.h>

int prime(int num);
void main(void) {

// Declare variabeles
    int number;

// Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

// Check if the number is prime
    if (prime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
}
int prime(int num) {
    if (num <= 1) {
        return 0;  
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1; 
}
