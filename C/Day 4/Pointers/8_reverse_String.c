#include <stdio.h>
#include <string.h>

void reverse_String(char *text);
int main() {
    char text[100];

// Input a string from the user
    printf("Enter a text: ");
    gets(text);

// Print the original string
    printf("Original text: %s\n", text);

    reverse_String(text);
// Print the string after reversing
    printf("Reversed text: %s\n", text);
    return 0;
}
void reverse_String(char *text) {
    int length = strlen(text);
    char *first = text;
    char *last = text + length - 1;

    // Swap characters from start to end
    while (first < last) {
        char temp = *first;
        *first = *last;
        *last = temp;
        first++;
        last--;
    }
}
