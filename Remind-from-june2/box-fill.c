#include <stdio.h>

int main() {

  int i, j, row;
  printf("Enter row number less than 10: ");
  scanf("%D", &row);

  if (row <= 10 && row > 0) {
    for (i = 1; i <= row; i++) {
      for (j = 1; j <= row; j++) {
        printf("* ");
      }
      printf("\n");
    }
  } else {
    printf("Enter row number between 0 to 10.");
  }

  return 0;
}