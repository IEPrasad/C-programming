#include <stdio.h>

int main() {
  int i, j, row;

  // Get user input for the number of rows
  printf("Enter row number less than 10: ");
  scanf("%d", &row);

  // Check if the entered number is less than 10
  if (row < 10) {
    // Check if the entered number is 4
    if (row == 4) {
      // Pattern for row 4
      for (i = 1; i <= row; i++) {
        for (j = 1; j <= row; j++) {
          if (j <= i) {
            printf("%d", i);
          }
        }
        printf("\n");
      }
    }

    // Check if the entered number is 6
    else if (row == 6) {
      // First half of the pattern for row 6
      for (i = 1; i <= row; i++) {
        for (j = 1; j <= row; j++) {
          if (j <= i) {
            printf("*");
          }
        }
        printf("\n");
      }

      // Second half of the pattern for row 6
      for (i = 2; i <= row; i++) {
        for (j = 1; j <= row; j++) {
          if (j >= i) {
            printf("*");
          }
        }
        printf("\n");
      }
    } 

    // Check if the entered number is 7
    else if (row == 7) {
      // First half of the pattern for row 7
      for (i = 1; i <= row; i++) {
        for (j = 1; j <= row; j++) {
          if (j >= i) {
            printf("*");
          } else {
            printf(" ");
          }
        }
        printf("\n");
      }

      // Second half of the pattern for row 7
      for (i = 2; i <= row; i++) {
        for (j = 1; j <= row; j++) {
          if (j >= row - i + 1) {
            printf("*");
          } else {
            printf(" ");
          }
        }
        printf("\n");
      }
    }

    // If user input number is not 4, 6, or 7
    else {
      printf("Enter User input as 4, 6, or 7");
    }
  } 

  // If the row number is not less than 10
  else {
    printf("Enter row number less than 10");
  }

  return 0;
}
