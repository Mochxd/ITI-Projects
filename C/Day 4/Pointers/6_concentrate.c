#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatenate(char *result, char *str1, char *str2);

void main(void) {

// Declare variables
    char str1[100], str2[100];

// Get the first string from the user
    printf("Enter the first string: ");
    gets(str1);

// Get the second string from the user
    printf("Enter the second string: ");
    gets(str2);

// Calculate the length of the concatenated string
    int Length = strlen(str1) + strlen(str2) + 1;

// Dynamically allocate memory for the concatenated string
    char *result = (char *)malloc(Length * sizeof(char));

// Check if memory allocation is successful
    if (result == NULL) {
        printf("Memory allocation failed.\n");
    }

    concatenate(result, str1, str2);
    printf("Concatenated string: %s\n", result);
    free(result);
}

void concatenate(char *result, char *str1, char *str2) {
    strcpy(result, str1);
    result = result + strlen(str1);
    strcpy(result, str2);
}
