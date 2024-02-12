// Data Types in C Programming 
/*
variable can store 
  4 bytes = 32 bits 
  to 
  2^32 distinct values from

  -2147483648 to 2147483647
*/


/*
  Different Data Types 

    int     (4 bytes) | %d for printing
    double  (8 bytes) | %lf for printing 
    float   (4 bytes) | %f for printing
    char    (1 byte)  | %c for printing 

*/

// Let's try this one by one 

    // Data type: int 

// #include <stdio.h>

// int main() {

//   int age = 10;
//   printf("%d", age);

//   return 0;
// }


    // Data type: float and double

// #include <stdio.h>

// int main() {

//   double number = 12.45;
//   float number1 = 10.9f;

//   printf("%lf", number);
//     // >> 12.450000
//   printf("\n%.2lf", number);
//     // >> 12.45
  
//   printf("\n%f", number1);
//     // >> 10.900000
//   printf("\n%.2f", number1);
//     // >> 10.90

//   return 0;
// }


// #include <stdio.h>

// int main() {
//   double number = 5.5e6;
//   float number2 = 5.5e6;

//   printf("%lf", number);
//     // >> 5500000.000000
//     //  5.5 x 10^6

//   printf("\n%f", number2);
//     // >> 5500000.000000

//   return 0;
// }

// ------------

    // Data type: char

  // *****  You must remember 
    // when we use type of character we have to use the 
    // single quotes instead double quotes

// #include <stdio.h>

// int main() {

//   char character = z;
//   printf("%c", character);
//   // >> z

//   printf(" %d", character);
//   // >> z 122

//   return 0;
// }

// -----------------------------------------


        // sizeof() Operator

#include <stdio.h>

int main() {

  int age;
  double number;

  printf("int size = %zu", sizeof(age));
  printf("\ndouble size = %zu", sizeof(number));
    // >> int size = 4
    // >> double size = 8


  return 0;
}





   

















