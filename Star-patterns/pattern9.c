/* Write a C program for get this out puts 
Output:

     *
    * *
   * * *
  * * * *
 * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *



*/

#include <stdio.h>

int main() {

  int i, j, row;
  printf("Enter row number less than 10: ");
  scanf("%d", &row);

  if (row < 10) {
    for (i = 1; i <= row; i++) {
      for (j = i; j <= row; j++) {
        printf(" ");
      }
      for(j = 1; j <= row; j++) {
        if (j <= i) {
          printf("* ");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }

    for (i = 1; i <= row; i++) {
      for (j = 1; j <= row; j++) {
        if (j >= i) {
          printf(" *");
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
