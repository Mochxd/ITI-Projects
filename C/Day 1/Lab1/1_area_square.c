#include <stdio.h>

void main(void) {
    
    // Declare the variables
    float h,w;
    
    // Get the width of the square from the user
    printf("Enter the height and width of the square: ");
    scanf("%f %f", &h, &w);
    
    // Print the Area of the square
    printf("The Area of the Square is %.2f", h*w);
}
