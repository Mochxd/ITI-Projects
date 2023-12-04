#include <stdio.h>

void convert_To_Decimal(int decimal);
void main(void){

// Declare varaibles   
    int decimal;

// Get input from the user
    printf("Please enter a decimal number: ");
    scanf("%d",&decimal);

    printf("The equaivalent =  ");
    convert_To_Decimal(decimal);
}
void convert_To_Decimal(int decimal){
    if(decimal > 0){
        convert_To_Decimal(decimal / 2);
        printf("%d", decimal % 2);
}
}