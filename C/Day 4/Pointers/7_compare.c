#include <stdio.h>

int compare_Strings(char *str1, char *str2);

void main(void) {

// Declare variables
    char str1[100], str2[100];

// Input the first string
    printf("Enter the first string: ");
    gets(str1);

// Input the second string
    printf("Enter the second string: ");
    gets(str2);

// Compare the strings using pointers
    if (compare_Strings(str1, str2)) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
}

// Function to compare two strings using pointers
int compare_Strings(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0;
        }
        str1++;
        str2++;
    }
    // Check if both strings have reached the end
    if (*str1 == '\0' && *str2 == '\0') {
        return 1; 
    } else {
        return 0;
    }
}
