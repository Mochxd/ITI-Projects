#include <stdio.h>
int calculate_factorial_rec(int n);

void main(void) {
// Declare values
    int num;
    
// Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
// Calculate factorial
    printf("Factorial is: %d\n", calculate_factorial_rec(num));

}
int calculate_factorial_rec(int n) {
    int result = 1;
    
    for (int i = 1; i <= n; ++i) {
        result = result * i;
    }
    
    return result;
}