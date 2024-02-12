    // User input in C 
/*
#include <stdio.h>

int main() {

  int age;

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Your age is = %d", age);
  

  return 0;
}
*/
// -------------


  // Double input
/*
#include <stdio.h>

int main() {

  double number;
  char alphabet;

  printf("Enter double input: ");
  scanf("%lf", &number);

  printf("Enter character input: ");
  scanf("\n%c", &alphabet);

  printf("The double value is: %lf", number);
  printf("\nThe character value is: %c", alphabet);

  return 0;
}
*/

      // Take multiple Input

#include <stdio.h>

int main() {

  double number;
  char alphabet;

  printf("Enter input values: ");
  scanf("%lf %c", &number, &alphabet);


  printf("Number: %lf", number);
  printf("\nCharacter: %c", alphabet);

  return 0;
}


/*
  Q. What is the correct way to take double input?

  A. scanf("%d", &input);
  B. scanf("%f", &input);
  C. scanf("%lf", &input);
  D. scanf("%c", &input);

** The correct one is c as I know.

*/

















