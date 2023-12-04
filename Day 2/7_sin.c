#include <stdio.h>

double calculate_factorial(int n);
double calculate_power(double x, int n);
double calculate_sin(double x, int terms);

int main() {
    
// Declare values    
    double input_value, result;

// Get user input
    printf("Enter a value: ");
    scanf("%lf", &input_value);

// Calculate sin
    result = calculate_sin(input_value, 5);

// Display the result
    printf("The sine of %.2lf is %.4lf\n", input_value, result);
    return 0;
}

double calculate_factorial(int n) {
    if (n == 0 || n == 1) {
        return 1.0;
    } else {
        return n * calculate_factorial(n - 1);
    }
}

double calculate_power(double x, int n) {
    double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= x;
    }   
    return result;
}

double calculate_sin(double x, int terms) {
    double result = 0.0;
    for (int n = 0; n < terms; n++) {
        double term = calculate_power(-1, n) * calculate_power(x, 2 * n + 1) / calculate_factorial(2 * n + 1);
        result += term;
    }
    return result;
}
