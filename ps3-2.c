#include <stdio.h>

int addition(int num1, int num2);
int multiplication(int num1, int num2);
int mySwap(int *a, int *b);

int main() {
  int num1 = 4;
  int num2 = 5;

  int sum = addition(num1, num2);
  int product = multiplication(num1, num2);

  printf("The sum of two nums: %d", sum);
  printf("\nThe multiplication of two nums: %d", product);

  mySwap(&sum, &product);

  printf("\nAfter swapping values:\n");
  printf("The sum of two nums: %d", sum);
  printf("\nThe product of two nums: %d", product);

  return 0;
}

int addition(int num1, int num2) {
  return num1 + num2;
}

int multiplication(int num1, int num2) {
  return num1 * num2;
}

int mySwap(int *a, int *b) {
  int swapNum = *a;
  *a = *b;
  *b = swapNum;
  return 0;
}
