// #include <stdio.h>

// int main() {
//   int count = 1;

//   while (count < 5) {
//     printf("While loop in C\n");
//     printf("Count = %d\n", count);
//     count += 1;
//   }

//   return 0;
// }


// #include <stdio.h>

// int main() {

//   int number;
//   printf("Enter the number: ");
//   scanf("%d", &number);

//   int count = 1;

//   while (count <= 10) {
//     int product = number * count;
//     printf("%d * %d = %d\n  ", number, count,   product);
//     count += 1;
//   }


//   return 0;
// }


      // Do.... while loop 


// do {
//   // body of loop
// } while (condition);

// #include <stdio.h>

// int main() {

//   int count = 1;

//   do {
//     printf("%d\n", count);
//     count += 1;
//   } while (count < 5);

//   return 0;
// }

/*
// ----------------------------

// do... while loop 

do {
  printf("%d \n", count);
  count += 1;
} while (count < 1);


// -------------------------- 

// while loop


while (count < 5) {
  printf("%d \n", count);
  count += 1;
}

*/


// Programming Task

// Can you use the while loop to print the 
// multiplication table for the given number.
// print the number from 10 to 1. So the output 
// would 
// be something like this.

// 9 * 10 = 90
// 9 * 9 = 81
// 9 * 8 = 72
// 9 * 7 = 63

// ---
// ---

// 9 * 1 = 9

// ----------------------------------




  #include <stdio.h>
  
  int main() {

    int count = 10;
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    while (count >= 1) {
      int result = number * count;
      printf("%d * %d = %d\n  ", number, count, result);
      count -= 1;
    }

    return 0;
  }






