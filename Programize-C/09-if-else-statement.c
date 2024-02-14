// #include <stdio.h>

// int main() {

//   int age;

//   printf("Enter your age: ");
//   scanf("%d", &age);

//   if (age >= 18) {
//     printf("You are eligible to vote");
//   }

//   if (age < 18) {
//     printf("Sorry, you are not eligible to vote");
//   }

//   return 0;
// }

// ------------------------------


// #include <stdio.h>

// int main() {

//   int age;

//   printf("Enter your age: ");
//   scanf("%d", &age);

//   if (age >= 18) {
//     printf("You are eligible to vote");
//   
//    } else {
//     printf("Sorry, you are not eligible to vote");
//    }

//   return 0;
// }

// -------------------------------------------

// #include <stdio.h>

// int main() {

//   int age;

//   printf("Enter your age: ");
//   scanf("%d", &age);


//   if (age > 120) {
//     printf("Invalid age");
  
//   } else if (age < 0) {
//     printf("Invalid age");
  
//   } else if (age >= 18) {
//     printf("You are eligible to vote");
  
//   } else {
//     printf("Sorry, you are not eligible to vote");
//   }

//   return 0;
// }

// ------------------------------------

// #include <stdio.h>

// int main() {

//   int age;

//   printf("Enter your age: ");
//   scanf("%d", &age);


//   if (age > 120 || age < 0) {
//     printf("Invalid age");
  
//   } else if (age >= 18) {
//     printf("You are eligible to vote");
  
//   } else {
//     printf("Sorry, you are not eligible to vote");
//   }

//   return 0;
// }

// ------------------------------------


// Exercise:

//   Can you create a program to check whether a number
//   is positive or negative or 0? To create this program,
//   create a variable named number and assign a double
//   value to it based on the user input. Then using an if 
//   statement, check if the number variable is positive or 
//   negative or 0.

//   ** If number is positive, print "The number is positive"

//   ** If number is negative, print "The number is negative"

//   ** (and) If number is 0, print "The number is 0" 

#include <stdio.h>

int main() {

  double number;
  printf("Enter value: ");
  scanf("%lf", &number);

  if (number > 0) {
    printf("The number is positive");
  } else if (number < 0) {
    printf("The number is negative");
  } else if (number == 0) {
    printf("The number is 0");
  }

  return 0;
}

















