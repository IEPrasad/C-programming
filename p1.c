#include <stdio.h>

int num1, num2, result;

int addition() {
    return (result = num1 + num2);
  }

int main() {

  num1 = 4;
  num2 = 5; 
  addition();
  printf("The sum of two nums: %d", result);
  
  return 0;
}







