#include <stdio.h>

int main() {
    int i, j, rows, space;

    // Asking for user input for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    space = rows - 1;

    // Print the upper part of the diamond
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= space; j++) {
            printf(" ");
        }
        space--;

        // Print stars
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    space = 1;

    // Print the lower part of the diamond
    for (i = 1; i <= rows - 1; i++) {
        // Print leading spaces
        for (j = 1; j <= space; j++) {
            printf(" ");
        }
        space++;

        // Print stars
        for (j = 1; j <= 2*(rows-i) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
