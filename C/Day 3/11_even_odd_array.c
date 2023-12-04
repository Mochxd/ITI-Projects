#include <stdio.h>

void main(void) {
    
// Input the size of the array
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

// Input the elements of the array
    int arr[size];
    printf("Enter the numbers of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

// Separate even and odd elements into two array
    int even[size], odd[size];
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

// Print even numbers
    printf("Even Numbers: \n");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }

// Print odd elements
    printf("\nOdd Numbers: \n");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
}
