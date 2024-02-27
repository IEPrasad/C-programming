/*
7.Write a program in C to make such a pattern like a pyramid with an asterisk.c

      *
     ***
    *****
   *******


*/

#include <stdio.h>

int main() {

  int i, j, row;
  printf("Enter row number less than 10: ");
  scanf("%d", &row);
  
  if (row < 10) {
    for (i = 1; i <= row; i++) {
        // print leading space
      for (j = i; j < row; j++) {
        printf(" ");
      }
        // print star 
      for (j = 1; j < 20; j++) {
        if (j <= (2 * i - 1)) {
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