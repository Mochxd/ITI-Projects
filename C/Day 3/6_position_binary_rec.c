#include <stdio.h>
int binary_Search_Rec(int arr[], int left, int right, int target);
int main() {

// Get the size of the array from the user
    int size,target;   
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
    int position = binary_Search_Rec(arr, 0, size - 1, target);
    if (position != -1) {
        printf("Target %d found at position %d\n", target, position+1);
    } else {
        printf("Target %d not found in the array\n", target);
    }
}
int binary_Search_Rec(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            return binary_Search_Rec(arr, mid + 1, right, target);
        } else {
            return binary_Search_Rec(arr, left, mid - 1, target);
        }
    }
    return -1; 
}
