#include <stdio.h>

void main(void) {
    
    // Input number of elements
    int num;
    printf("Enter the maximum number of elements: ");
    scanf("%d", &num);

    // Declare arrays for odd and even numbers
    int Input_Array[num];
    int Odd_Array[num];
    int Even_Array[num];

    // Input array elements
    printf("Enter %d integers:\n", num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &Input_Array[i]);
    }

    // Make a counter to store even and odd numbers
    int odd_count = 0;
    int even_count= 0;

    for (int i = 0; i < num; i++) {
        if (Input_Array[i] % 2 == 0) {
            Even_Array[even_count] = Input_Array[i];
            even_count++;
        } else {
            Odd_Array[odd_count] = Input_Array[i];
            odd_count++;
        }
    }

    // Display the odd and even numbers
    printf("Odd numbers: ");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", Odd_Array[i]);
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", Even_Array[i]);
    }

}
