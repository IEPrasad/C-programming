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

/*
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

*/


    // Benifits of Standard Library Functions


// ----
// ---
// ---



// Programming Task 

  // ** Create a program that computes the result of a 
  //    number raised to the power of the square root 
  //    of a number.

  //    . Take a input from user
    
  //    . Compute the square root of a number using 
  //      sqrt()

  //    . Compute the power of the number raised to 
  //      the power of its square root 

  //    . Print the result 


#include <stdio.h>
#include <math.h>

int main() {

  int inputValue;
  printf("Enter Value: ");
  scanf("%d", &inputValue);

  double square = sqrt(inputValue);

  double power = pow(inputValue, square);

  printf("The result is: %lf", power);


  return 0;
}







