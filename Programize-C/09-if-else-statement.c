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



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int i, j, row;
    printf("Enter row number less than 10: ");
    scanf("%d", &row);
    
    if (row < 10) {
        for (i = 1; i <= row; i++) {
            for (j = i; j <= row; j++) {
                printf(" ");
            }
            for (j = 1; j < row*2; j++) {
                if (j <= (2*i -1)) {
                    printf("*");
                } else if (j >= i) {
                    printf(" ");
                }
            }
            printf("\n");
        }   
    } else {
        printf("Enter row number less than 10");
    }
    return 0;
}
/* how to create a zip file in linkux lite
	zip -r lab_test_2.zip 'Lab test 02;

*/
















