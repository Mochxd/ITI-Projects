#include <stdio.h>

int power_factorial(int number,int power);
void main(void) {

// Declare variabeles
    int number;
    int power;

// Input the number and exponent from the user
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the power: ");
    scanf("%d", &power);

// Calculate and display power using iterative function
    printf("Power: %d\n", power_factorial(number, power));
}
int power_factorial(int number,int power) {
    int result = 1;
    while (power > 0) {
        result *= number;
        power--;
    }
    return result;
}
