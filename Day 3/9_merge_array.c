#include <stdio.h>

void Merge_Arrays(int array1[], int size1, int array2[], int size2, int MergeArray[]);
void main(void) {

// Declare vaiables    
    int size_1, size_2;

// Input size of the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &size_1);

    int array_1[size_1];

// Input elements of the first array
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < size_1; i++) {
        scanf("%d", &array_1[i]);
    }

// Input size of the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &size_2);

    int array_2[size_2];

// Input elements of the second array
    printf("Enter elements of the second array:\n");
    for (int i = 0; i < size_2; i++) {
        scanf("%d", &array_2[i]);
    }

// Calculate the size of the merged array
    int merge_size = size_1 + size_2;

// Declare the merged array
    int merge_Array[merge_size];

// Call the function to merge arrays
    Merge_Arrays(array_1, size_1, array_2, size_2, merge_Array);

// Display the merged array
    printf("Merged Array:\n");
    for (int i = 0; i < merge_size; i++) {
        printf("%d ", merge_Array[i]);
    }
}

void Merge_Arrays(int array1[], int size1, int array2[], int size2, int MergeArray[]) {
    int i = 0, j = 0, k = 0;
// compare between 2 arrays to sort the merged array
    while (i < size1 && j < size2) {
        if (array1[i] < array2[j])
            MergeArray[k++] = array1[i++];
        else
            MergeArray[k++] = array2[j++];
    }
    while (i < size1)
        MergeArray[k++] = array1[i++];

    while (j < size2)
        MergeArray[k++] = array2[j++];
}
