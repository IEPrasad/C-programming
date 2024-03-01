/*
when we enter row number as 5 we want to get this output

*****
*   *
*   *
*   *
*****

*/
#include <stdio.h>

int main() {

  int i, j, row;
  printf("Enter row number less than 10: ");
  scanf("%d", &row);

  if (row < 10) {
    for (i = 1; i <= row; i++) {
      for (j = 1; j <= row; j++) {
        if (i == 1 || i == row || j == 1 || j == row) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
  } else {
    printf("Enter row number less than 10");
  }

  return 0;  
} 
// -------------------------------