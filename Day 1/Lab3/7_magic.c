#include <stdio.h>
#include <windows.h>
void goto_row_col(int row, int col);
void main(void) {
    int row, col;
    int value = 1;
    int n;
    do {
        printf("Enter the odd size for magic square: \n");
        scanf("%d", &n);
    } while (n % 2 == 0);

    row = 1;
    col = (n + 1) / 2;
    do {
        goto_row_col(row, col * 4);
        printf("%4d", value);
        if (value % n == 0) {
            row++;
        } else {
            row--;
            col--;
            if (row == 0) {
                row = n;
            }

            if (col == 0) {
                col = n;
            }
        }
        value++;

        // Check if the magic square is complete and exit the loop
        if (value > n * n) {
            break;
        }
    } while (1);

    printf("\nMagic square generated!\n");
}

void goto_row_col(int row, int col) {
    COORD c;
    c.X = col;
    c.Y = row;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
