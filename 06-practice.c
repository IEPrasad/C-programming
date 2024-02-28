#include <stdio.h>

int main() {

  int i, j, row;
  printf("Enter row number less than 10: ");
  scanf("%d", &row);

  if (row < 10) {
    for (i = 1; i <= row; i++) {
      for (j = i; j < row; j++) {
        printf(" ");
      }
      for (j = 1; j < row*2; j++) {
        if (j <= (2*i -1)) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
 
    for (i = 1; i <= row; i++) {
      for (j = 1; j < row*2; j++) {
        if (j >= (2*i -1)) {
          printf("*");
        } else if (j >= i) {
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

/*
  when we enter row number as 6 the out put is 

     *
    ***
   *****
  *******
 *********
***********
***********
 *********
  *******
   *****
    ***
     *

  
*/ 