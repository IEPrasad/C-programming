/*
3. Write a program in C to make a such a pattern 
like right angle triangle 
The pattern like :

1
22
333
4444


*/

#include <stdio.h>

int main() {

  int i, j, row;
  printf("Enter row number less than 10: ");
  scanf("%d", &row);

  if (row < 10) {
    for (i = 1; i <= row; i++) {
      for (j = 1; j <= row; j++){
        if ( j <= i) {
        printf("%d", i);
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
  }


  return 0;
}
