#include <stdio.h>
#include <math.h>

void main(void) {
    // Declare variables
    float a,b,c;

    // Get user input for a number  
    printf("Enter first number 'a' of the Quadric Equation: ");
    scanf("%f",&a);
    printf("Enter first number 'b' of the Quadric Equation: ");
    scanf("%f",&b);
    printf("Enter first number 'c' of the Quadric Equation: ");
    scanf("%f",&c);
    float x = b*b -(4*a*c);
    if(x < 0)
    {
        printf("Invalid Values No soluation for that.\n");
    }else{
        float num1 = (-b + sqrt(x)) / 2*a;
        float num2 = (-b - sqrt(x)) / 2*a;
        printf("Soluation of the equation is %.2f and %.2f", num1,num2);
    }
}
