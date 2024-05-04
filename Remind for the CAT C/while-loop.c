#include <stdio.h>

int main() {

  int i;
  int j = 0;
  printf("Enter number less than 15: ");
  scanf("%d", &i);

  while (j <= i) {
    j ++;
    printf("\nNumber %d", j);
  }

  return 0;
}
