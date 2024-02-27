/*

Write a program in C to display the pattern like 
right angle triangle the pattern like :

1
12
123
1234

*/

#include <stdio.h>

int main() {
  
  int i, j, row;
  printf("Enter row number: ");
  scanf("%d", &row);

  if (row < 10) {
    for (i = 1; i <= row; i++) {
      for (j = 1; j <= row; j++) {
        if (j <= i) {
                    
          printf("%d", j);
          // printf("*");
          
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
  } else {
    printf("Enter number less than 10");
  }


  return 0;
}




















