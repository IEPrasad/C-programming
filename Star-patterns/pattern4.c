/*
4. Write a program in C to make such a pattern like 
right angle triangle with number increased by
The pattern like :

1
2 3
4 5 6 
7 8 9 10

*/

#include <stdio.h>

int main() {

  int i, j, k=1, row;
  printf("Enter row number less than 10: ");
  scanf("%d", &row);

  if (row < 10) {
    for (i = 1; i <= row; i++) {
      for (j = 1; j <= row; j++) {
        if (j <= i) {
          printf("%d ", k++);
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
  }


  return 0;
}