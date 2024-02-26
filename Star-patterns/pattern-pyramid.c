
// if input number is even 
// print square pattern 
// else print 
// pyramid pattern


#include <stdio.h>

int main() {

  int i, j, row;
  printf("Enter number of rows: ");
  scanf("%d", &row);

  if (row < 10) {
    
    if (row %2 == 0){
      for (i = 1; i <= row; i++) {
        for (j = 1; j <= row; j++) {
          printf("*");
        } 
        printf("\n");
      }
    
    } else {
      // print pyramid pattern.
        for (i = 1; i <= row; i++) {
          // 1 print leading spaces 
          for (j = i; j < row; j++) {
            printf(" ");
          }
          // print star
          for (j = 1; j <= (2*i - 1); j++) {
            printf("*");
          }
          // Move to next line 
          printf("\n");

        }

      }
    
  } else {
    printf("Enter row number less than 10");
  }

  return 0;
}