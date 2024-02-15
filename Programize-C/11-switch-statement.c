// Switch statement in C

// switch(variable/expression) {
//   case value1:
//     // body of case 1
//     break;

//   case valuse2:
//     // body of case 2
//     break;

//   case valueN:
//     // body of case N
//     break;

//   default:
//     // body of default 

// }
/*
#include <stdio.h>

int main() {

  int number;
  printf("Enter the number between 1 to 7: ");

  scanf("%d", &number);

  switch(number) {
    case 1  : 
    printf("Sunday");
    break;

    case 2:
    printf("Monday");
    break;

    case 3:
    printf("Tuesday");
    break;

    case 4:
    printf("Wednesday");
    break;

    case 5:
    printf("Thirsday");
    break;

    case 6:
    printf("Friday");
    break;

    case 7:
    printf("Saturday");
    break;

    default:
    printf("Invalid number");
  }


  return 0;
}

*/

/*
// ------------- Switch with multiple case 

#include <stdio.h>

int main() {

  int number;
  printf("Enter a number between 1 to 7: ");
  scanf("%d", &number);

  switch(number) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      printf("Weekday");
      break;

    case 1:
    case 7:
      printf("Weekend");
      break;
    
    default:
      printf("Invalid Number");

  }

  return 0;
}

*/


// ----------- Simple Calculator

// #include <stdio.h>

// int main() {

//   char operator;
//   printf("Choose an operator ['+', '-', '*', '/': ]");
//   scanf("%c", &operator);

//   double num1, num2;

//   printf("Enter first number: ");
//   scanf("%lf", &num1);

//   printf("Enter second number: ");
//   scanf("%lf", &num2);

//   double result;

//   switch(operator) {
//     case '+':
//       result = num1 +num2;  
//       break;
//     case '-':
//       result = num1 - num2;
//       break;
//     case '/':
//       result = num1 / num2;
//       break;
//     case '*':
//       result = num1 * num2;
//       break;
//   }
//     printf("%.2lf", result);


//   return 0;
// }


// Programming Task

//   ** Use the switch statement to create a program that will 
//   find the month based on the number input. Take The input number from 1 to 12. 
//   And print the correcsponding month based on the input value.

//       If number is 1, print Januaray;
//       If numebr is 2, print February;
//       If number is 3, print March;
//       and so on.

#include <stdio.h>

int main() {
  int number;
  printf("Enter a value between 1 to 12: ");
  scanf("%d", &number);

  switch(number){
    case 1:
    printf("January");
    break;

    case 2:
    printf("February");
    break;
    case 3:
    printf("March");
    break;
    case 4:
    printf("April");
    break;
    case 5:
    printf("May");
    break;
    case 6:
    printf("June");
    break;
    case 7:
    printf("July");
    break;
    case 8:
    printf("Auguast");
    break;
    case 9:
    printf("September");
    break;
    case 10:
    printf("October");
    break;
    case 11:
    printf("November");
    break;
    case 12:
    printf("December");
    break;


    
  }
  

}







