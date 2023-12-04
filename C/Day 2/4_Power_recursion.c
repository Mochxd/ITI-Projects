#include <stdio.h>

int power_rec(int number,int power);
void main(void) {

// Declare variabeles
    int number;
    int power;

// Input the number and exponent from the user
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the power: ");
    scanf("%d", &power);

// Calculate and display power using recursion function
    printf("Power: %d\n", power_rec(number, power));
}

int power_rec(int number,int power) {
    int result = 1;
    if (power == 0) {
        return 1;
    }
    return number * power_rec(number, power - 1);
}
