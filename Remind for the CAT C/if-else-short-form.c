#include <stdio.h>

int main() {

  int num1, num2;
  printf("Enter first value 1: ");
  scanf("%d", &num1);
  printf("\nEnter second value 2: ");
  scanf("%d", &num2);

  (num1 > num2) ? printf("\nFirst value (%d) is greater than the second value (%d).", num1, num2) 
                : printf("\nSecond value (%d) is greater than or equal to the first value (%d).", num2, num1);
  return 0;
}


// this is call as ternary operator 
