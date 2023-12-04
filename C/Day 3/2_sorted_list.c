#include <stdio.h>

void main(void) {
    
    // Input number of elements
    int num;
    printf("Enter the maximum number of elements: ");
    scanf("%d", &num);

    // Declare new array to store the values
    int sorted_Array[num + 1]; 

    // Input sorted array elements
    printf("Enter %d sorted integers:\n", num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &sorted_Array[i]);
    }

    // Display the sorted array
    printf("Sorted array : ");
    for (int i = 0; i < num; i++) {
        printf("%d ", sorted_Array[i]);
    }

    // Input the new value to assign in the array
    int new_Value;
    printf("Enter the new value to be inserted: ");
    scanf("%d", &new_Value);

    // Insert the new value into the sorted array
    int i = num - 1;
    while (i >= 0 && sorted_Array[i] > new_Value) {
        sorted_Array[i + 1] = sorted_Array[i];
        i--;
    }
    sorted_Array[i + 1] = new_Value;

    // Display the updated sorted array
    printf("Updated sorted array: ");
    for (int i = 0; i <= num; i++) {
        printf("%d ", sorted_Array[i]);
    }
}
