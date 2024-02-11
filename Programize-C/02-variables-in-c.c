
// In computer programmin, a variable is a 
// name given to a memory location inside our 
// computer where we can store data.

/*
#include <stdio.h>

int main() {

  int age = 22;

  printf("C-programming \n" );

  printf("Age: %d", age);

  age = 31;
  printf("\n New age: %d", age);

  return 0;
}

*/
// -------------

/*
#include <stdio.h>

int main() {
  int firstNumber = 33;
  printf("firstNumber = %d", firstNumber);

  int secondNumber = firstNumber;
  printf("\nsecondNumber = %d", secondNumber);
}

*/


//  --------------

// Declaring Multiple variables at once

// #include <stdio.h>

// int main() {
  
//   int number1, number2 = 10;
//   printf("number1 %d", "number2 %d");

//   return 0;
// }


// ------------- 

// Variable Naming Covensions
/*
** You cannot create variable with space in between.
    wrong>> 
      int first number = 56 ;

** You cannot start variable name with numbers.
    wrong>> 
      int 1number = 23;

** You cannot use certain words as varable names.
    wrong>> 
      int if = 33;

----------------------------------
*/
// Question 1: 

// Can you guess the output of this program?

#include <stdio.h>

int main() {

  int number1 = 33;
  printf("%d ", number1);
  printf("%d", number1);

  return 0;
}

// ** I was think it is 3333
// but ther answer is 33 33







