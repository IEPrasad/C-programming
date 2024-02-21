// #include <stdio.h>

// int main() {

//   for (int i = 1; i <= 5; i++) {
//     printf("%d\n", i);
//     break;
//     printf("After the break statement");
//   }

//   return 0;
// }

// >> 1
// ---------------


// #include <stdio.h>

// int main() {

//   for (int i = 1; i <= 5; i++) {
    
//     if (i == 3) {
//       break;
//     }
//     printf("%d\n", i);
//   }
//   return 0;
// }

// // >> 1
// //    2

// -- break with while loop 

// #include <stdio.h>

// int main() {

//   while (1) {
//     int number;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     if (number < 0) {
//       break;
//     }
//     printf("%d\n", number);
//   }

//   return 0;
// }

// --------------------

//  -- continue statement

// #include <stdio.h>

// int main() {

//   for (int i = 1; i <= 5; i++) {
//     if (i == 3) {
//       continue;
//     }
  
//     printf("%d\n", i);
//   }

//   return 0;
// }

// >> 1
// >> 2
// >> 4
// >> 5

// --------^^^^ look at these output

// Example : break and continue 

// #include <stdio.h>

// int main() {

//   while (1) {
//    int number;
//    printf("Enter a number: ");
//    scanf("%d", &number);

//    if (number <= 0) {
//     break;
//    }
//    if ((number % 2) != 0) {
//     continue;
//    }

//   printf("%d\n", number);

//   }
//   return 0;
// }


// --------------

// Programming Task

// Can you write a program that takes an input 
// from the user and prints it if the value is a 
// negative idd number?

//   . If the input value is positive, end the loop with 
//     message, "Positive Value".
  
//   . If the input value negative even, skip the 
//     value with message "Negative Even".


#include <stdio.h>

int main() {

  while(1) {
    printf("Enter a value: ");
    int input_value;
    scanf("%d", &input_value);

    if (input_value > 0) {
      printf("Positive Value");
      break;
    }
    if (input_value < 0 && input_value % 2 == 0) {
      printf("Negative Even\n");
      continue;
    }
  }

  return 0;
}





