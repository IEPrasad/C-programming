/*
#include <stdio.h>

int main() {

  int i, j, row;
  printf("Enter row number less than 10: ");
  scanf("%d", &row);

  if (row >= 1 && row <= 10) {
    for (i = 1; i <= row; i++) {
      for (j = 1; j <= row; j++) {
        if (j == 1 || i == 1 || j*j == i) {
          printf("* ");
        } else {
          printf(" ");
        }
      }
        printf("\n");

    }

  } else {
    printf("Enter row number less than");
  }


  return 0;
}

// This is not correct code ^^^

*/

#include <stdio.h>

int main() {

  int i, j, row;
  printf("Enter row number less than 10: ");
  scanf("%d", &row);

  if (row >= 1 && row <= 10) {
    for (i = 1; i <= row; i++) {
      for (j = 1; j <= row; j++) {
        if (j == 1 || i == 1 || j == row || i == row || j == i) {
          printf("*");
        } else {
          printf(" ");
        }
      }
        printf("\n");

    }

  } else {
    printf("Enter row number less than.");
  }

  return 0;
}


// This is good code 
// but this is not perfect or or not perfect hollow square













