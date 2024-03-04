#include <stdio.h>

int main() {

  int number;
  int result = 1;
  printf("Enter number: ");
  scanf("%d", &number);


  while (number > 0) {
    result = result * number;
    number -= 1;
  }
  printf("The out put is: %d", result);

  return 0;
}
