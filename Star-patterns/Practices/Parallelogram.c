#include <stdio.h>

int main() {
    int i, j, rows, columns, spaces;

    // Asking for user input for the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    spaces = rows - 1;

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= columns; j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");

        // Decrease the number of leading spaces for the next row
        spaces--;
    }

    return 0;
}

Enter the number of rows: 10
Enter the number of columns: 8
         ********
        ********
       ********
      ********
     ********
    ********
   ********
  ********
 ********
********

// This is the out put of this code !
