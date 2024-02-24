// Math header file 
/*
#include <stdio.h>
#include <math.h>

int main() {
  
  // int num = 25;  
  // sqrt() function
  // printf("Square root %lf", sqrt(num));

  // int num2 = 27;
  // cbrt() function
  // printf("Cube root %lf", cbrt(num2));



  // int a = 5;
  // int b = 2;
  // pow() function
  // double result = pow(a, b);
  // printf("Power: %lf", result);

  return 0;
}

*/

    // ctype Header File 


#include <stdio.h>
#include <ctype.h>

int main() {

  char alpha = 'e';
  char upper = toupper(alpha);
  printf("%c", upper);

  char lower = tolower(upper);
  printf("\n%c", lower);
  
  return 0;
}