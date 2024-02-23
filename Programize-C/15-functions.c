// Functions in C 

// ** a fucntion to create a circle 
// ** a function to create a rectangle 
// ** a function to color the shape 

// ** when we use the void don't need to use the "return
// statement"

// #include <stdio.h>

// void greet() {
//   printf("Good Morning");
// }

// int main() {

//   greet();
//   return 0;
// }

// >> Good Morning



// #include <stdio.h>

// void greet() {
//   printf("Good Morning\n");
// }

// int main() {

//   greet();
//   greet();
//   greet();
//   greet();
//   printf("After Function Call");
//   return 0;
// }
// >> Good Moring 
// >> Good Moring 
// >> Good Moring 
// >> Good Moring 
// >> After Function Call 


// -------------------

      // -- Function Parameters 

// #include <stdio.h>

// void calculateSquare(int number) {
//   int square = number * number;
//   printf("Square of %d is %d\n", number, square);
// }

// int main() {

//   calculateSquare(5);
//   return 0;
// }

// ----------


// #include <stdio.h>

// void addNumbers(int number1, int number2) {
//   int sum = number1 + number2;
//   printf("Sum of %d and %d is %d", number1, number2, sum);
// }

// int main() {

//   addNumbers(10, 12);
//   return 0;
// }

// >> Sum of 10 and 12 is 22

// ------------------------------------


    // -- Return Types 

// #include <stdio.h>

// int addNumbers(int number1, int number2) {
//   int sum = number1 + number2;

//   return sum;
// }

// int main() {

//     int result = addNumbers(10, 12);
//     printf("Result = %d", result);

//   return 0;
// }
    
// >> Result = 22

// ---------------------------------------------


    // -- Function Prototype 

// #include <stdio.h>

// int addNumbers(int number1, int number2);

// int main() {

//     int result = addNumbers(10, 12);
//     printf("Result = %d", result);

//   return 0;
// }
   
// int addNumbers(int number1, int number2) {
//   int sum = number1 + number2;

//   return sum;
// }

// >> Result = 22


// ***** if we put the function after the call the 
// function, when we can add put the prototype of 
// function befor we called the funtion 
// thats only need like this 
// int addNumbers(int number1, int number2);
// no need function body...

// -----------------------------------------------

  // -- Standard Library Funtion 

// #include <stdio.h>
// #include <math.h>

// int main() {
//     float result = sqrt(25);
//     printf("Square root is %.3f", result);

//     // this sqrt() function is built-in function 
//     // as like printf() funtion 

//   return 0;
// }

// >> Square root is 5.000
// ----------------------------------------------------

// -- main Function 

// ** main is also a function in C
// ** It is the first function 
// ** that is executed by the compiler 
// ** so every C program should include a main function.

// ---------------------------------------------------


  // Programming Task

// Can you create a function that 

//   . takes two numbers 
//   . perform the multiplication of two numbers 
//   . returns the result 

#include <stdio.h>

int main() {

  int num1, num2;
  printf("Enter first number: ");
  scanf("%d", &num1);

  printf("Enter second number: ");
  scanf("%d,", &num2);

  int result = num1 * num2;
  printf("Multiplication of %d and %d is %d", num1, num2, result);

  return 0;
}







