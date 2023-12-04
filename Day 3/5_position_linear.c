#include <stdio.h>

int linear_Search(int arr[], int size, int target);
int main() {

// Get the size of the array from the user
    int target,size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];

// Get the elements of the array from the user
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

// Get the target value from the user
    printf("Enter the target value: ");
    scanf("%d", &target);
    
    int position = linear_Search(arr, size, target);
    if (position != -1) {
        printf("Target number %d found at position %d\n", target, position+1);
    } else {
        printf("Target number %d not found in the array\n", target);
    }
    return 0;
}
int linear_Search(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

