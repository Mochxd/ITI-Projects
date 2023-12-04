#include <stdio.h>

int main() {
    // Get income from the user
    float income;
    printf("Enter your income: ");
    scanf("%f", &income);

    // Calculate tax based on income
    float tax = 0;

    if (income <= 7000) {
        tax = 0;
    } else if (income > 7000 && income <= 20000) {
        tax = 0.1 * (income - 7000);
    } else if (income > 20000 && income <= 45000) {
        tax = 0.1 * (20000 - 7000) + 0.15 * (income - 20000);
    } else if (income > 45000 && income <= 200000) {
        tax = 0.1 * (20000 - 7000) + 0.15 * (45000 - 20000) + 0.2 * (income - 45000);
    } else {
        tax = 0.1 * (20000 - 7000) + 0.15 * (45000 - 20000) + 0.2 * (200000 - 45000) + 0.4 * (income - 200000);
    }

    // Display the tax
    printf("Your income tax is: %.2f\n", tax);

    return 0;
}
