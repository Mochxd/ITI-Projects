#include <stdio.h>

void buble(int arr[], int n, int sortedArr[]) ;
int main() {
    
// Get the size of the array from the user
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int original_Array[size];
    int sorted_Array[size];

// Ask the user to input elements of the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &original_Array[i]);
    }
    buble(original_Array, size, sorted_Array);

    // Displaying the sorted array
    printf("Original Array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", original_Array[i]);
    }

    printf("\nSorted Array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", sorted_Array[i]);
    }
    return 0;
}

void buble(int arr[], int n, int sortedArr[]) {
// Put the original array in the sorted array
    for (int i = 0; i < n; i++) {
        sortedArr[i] = arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (sortedArr[j+1] < sortedArr[j]) {
                int temp = sortedArr[j];
                sortedArr[j] = sortedArr[j + 1];
                sortedArr[j + 1] = temp;
            }
        }
    }
}
