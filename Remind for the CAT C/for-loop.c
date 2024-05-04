#include <stdio.h>

int main() {

  int i;
  printf("Enter number less than 10:");
  scanf("%d", &i);

  for (int j = 1; j <= i; j++) {
    printf("\nNumber %d", j);
  }


  return 0;
}
