#include <stdio.h>

int binary_Search(int arr[], int size, int target) ;
void main (void) {

// Get the size of the array from the user
    int size,target;;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];

// Get the elements of the array from the user
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

// Get the target value from the user
    printf("Enter the target value: ");
    scanf("%d", &target);

    int position = binary_Search(arr, size, target);
    if(position != -1) {
        printf("Target number %d found at position %d\n", target, position + 1);
    } else {
        printf("Target number %d not found in the array\n", target);
    }
}

int binary_Search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
