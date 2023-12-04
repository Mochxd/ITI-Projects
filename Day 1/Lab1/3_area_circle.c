#include <stdio.h>

void main(void) {
    
    // Declare the variables
    const double pi = 3.14159265359;
    double radius;

    // Get the radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    double area = pi * radius * radius;
    
    // Print the Area of the Circle
    printf("Area: %.2f\n", area);
}

 