#include <stdio.h>

int main() {
    int n; 
    int max, num;
    printf("Enter the number of integars: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive number of integers\n");
        return 1; 
    }
    printf("Enter integer 1: ");
    scanf("%d", &max);
    for (int i = 2; i <= n; i++) {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);

        if (num > max) {
            max = num;}
    }
    printf("The maximum number is: %d\n", max);
    return 0;
}
