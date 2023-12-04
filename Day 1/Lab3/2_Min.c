#include <stdio.h>

int main() {
    int n;
    int num;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input. Please enter a positive number of integers.\n");
        return 1; 
    }
    int min;
    printf("Enter integer 1: ");
    scanf("%d", &min);

    for (int i = 2; i <= n; ++i) {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);
        if (num < min) {
            min = num;
        }
    }
    printf("The minimum number is: %d\n", min);
    return 0;
}
