#include <stdio.h>

int main () {

  int i, j, row;
  printf("Enter row number less than 10: ");
  scanf("%d", &row);

  if (row < 10) {
    for (i = 1; i <= row; i++) {
      for (j = 1; j <= row; j++) {
        if (j >= i) {
          printf("*");
        }
    }
      printf("\n");
    }

    for (i = 2; i <= row; i++) {
      for (j = 1; j <= row; j++) {
        if (j <= i) {
          printf("*");
        }
      }
      printf("\n");
    }
  } else {
    printf("Enter row number less than 10");
  }

  return 0;
}