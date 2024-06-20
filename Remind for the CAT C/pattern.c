#include <stdio.h>

int main() {

int i, j, row;
printf("Enter row number less than 10: ");
scanf("%d", &row);

if (row <= 10 && row >= 1) {
  for (i = 1; i <= row; i++) {
    for (j = 1; j <= 2*i ; j++) {
      if (j <= 2*i -1) {
        printf("*");
      } else {
        printf("");
      }
    } 
    printf("\n");
  }
}

}
