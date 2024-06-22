#include <stdio.h>

int main() {
    int i, j, rows;

    // Asking for user input for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop for each row
    for (i = 1; i <= rows; i++) {
        // Loop for printing spaces before stars
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Loop for printing stars
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
