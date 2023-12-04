#include <stdio.h>

int String_Length(char *str);
int main() {
    char text[100];

// Get a string from the user
    printf("Enter a string: ");
    gets(text);

// Calculate the length of the string
    int length = String_Length(text);
    printf("Length of the string: %d\n", length);

    return 0;
}
int String_Length(char *str) {
    char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - str;
}
