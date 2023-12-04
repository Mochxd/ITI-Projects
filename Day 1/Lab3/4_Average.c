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
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);
        sum += num;
    }
    double average = (double)sum / n;
    printf("The average is: %.2f\n", average);
    return 0;
}
