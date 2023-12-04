#include <stdio.h>

void main(void) {
    
    // Declare the variables
    float h,w;
    
    // Get the width of the Rec from the user
    printf("Enter the height and width of the Rec: ");
    scanf("%f %f", &h,&w);

    // Print the Area of the Rectangular
    printf("The Area of the Rec is %.2f", h*w);
}
