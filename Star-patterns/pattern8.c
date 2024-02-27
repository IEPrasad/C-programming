/*
8.Write a program in C to make such a pattern like a right triangle with an asterisk.c

******
*****
****
***
**
*


*/

#include <stdio.h>

int main() {

  int i, j, row;
  printf("Enter row number less than 10: ");
  scanf("%d", &row);

  if (row < 10) {
    for (i = 1; i <= row; i++) {
      for (j = 1; j <= (row + 1); j++) {
        if (j <= i) {
          printf("");
        } else {
          printf("*");
        }
      }
      printf("\n");
    }
  }


  return 0;
}