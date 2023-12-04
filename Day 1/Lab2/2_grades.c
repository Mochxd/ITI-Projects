#include <stdio.h>

void main(void) {
    // intializtion values
    int mark;

    // Get user input for the student mark
    printf("Enter the student mark: ");
    scanf("%d", &mark);

    // Check and print the right grade
    if (mark < 0 || mark > 100) {
        printf("Invalid mark. Please enter a mark between 0 and 100.\n");
    } else if (mark < 50) {
        printf("Grade: Fail\n");
    } else if (mark < 65) {
        printf("Grade: Pass\n");
    } else if (mark < 80) {
        printf("Grade: Good\n");
    } else if (mark < 90) {
        printf("Grade: Very Good\n");
    } else {
        printf("Grade: Excellent\n");
    }

}