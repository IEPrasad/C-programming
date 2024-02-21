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



