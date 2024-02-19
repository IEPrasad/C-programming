/* 
// for loop in C

for (initializationExpression; testExpression; updateExpression) {
  // code inside the for loop
}
 
for (int i = 0; i < 5; i+1) {
  // code inside the for loop
}


*/

// #include <stdio.h>

// int main() {

//   for (int i = 0; i < 10; i++) {
//     printf("%d ", i);

//   }

//   return 0;
// }

// sum of 100 numbers 

// #include <stdio.h>

// int main() {

//   int sum = 0;
//   for (int i = 1; i <= 100; i++) {
//     sum += i;
//   } 
//   printf("%d", sum); 


//   return 0;
// }

//--------------

// Sum of even numbers

// #include <stdio.h>
// int main() {

//   int sum = 0;
//   for (int i = 2; i <= 100; i += 2) {
//     sum += i;
//   } 
//   printf("%d", sum); 


//   return 0;
// }


// ---------------------------------


// Programming Task

// Can you use the for loop to compute the 
// sum of only odd numbers from 1 to 100?

// In each iteration, you need to add an odd number to the sum.

// sum = sum + 1
// sum = sum + 3
// sum = sum + 5
// ....
// ....

// sum = sum + 99

#include <stdio.h>

int main() {

  int sum = 0;
  for (int i = 1; i <= 100; i += 2) {
    sum += i;
  }

  printf("%d", sum);

  return 0;
}






















