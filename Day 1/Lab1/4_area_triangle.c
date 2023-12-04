#include <stdio.h>
#include <math.h>

void main(void) {
    
    // Declare the variables
    float a,b,c;
    float s,area;

    // Get the 3 sides from the user
    printf("Enter the 3 sides of the traingle: ");  
    scanf("%f %f %f", &a, &b, &c);
    
    // Make the equation to get the area
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    // Print the Area of the Triangle
    printf("The Area of the Traingle with sides %.1f, %.1f, %.1f is %.2f",a,b,c,area);
}
 