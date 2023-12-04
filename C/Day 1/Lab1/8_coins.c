#include <stdio.h>

int main() {
    // Declare Variables
    int amount;
    
    // Input amount of the money
    printf("Enter the amount: ");
    scanf("%d", &amount);

    // Check if the user input invalid number
    if(amount <= 0) {
        printf("Invalid amount. Please enter a positive integer.\n");
        return 1;
    }

    // Print the changing Coins
    printf("%d x Coin 50 \n", amount / 50);
    int module = amount % 50;
    printf("%d x Coin 25 \n", module / 25);
    int module1 = amount % 25;
    printf("%d x Coin 10 \n", module1 / 10);
    int module2 = amount % 10;
    printf("%d x Coin 5 \n", module2 / 5);
    int module3 = amount % 5;
    printf("%d x Coin 1 \n", module3 / 1);
}

