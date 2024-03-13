/*
  Recursion in C programming refers to a situation where a fucntion calls itself in 
  its own definition. Recursive fucntions are characterized by breaking down a 
  problem through
  repeated calls to the same function. Recursive function must have a base 
  case to prevent an infinite loop, and they utilize the call stack to manage the 
  sequence of function calls. Recursion is a powerful programming technique
  that is particulary useful for solving problems with a repetitive and self-similar
  structure.

*/ 


// structure of the recursion fucntion
/*
void recurse() {

  ...
  recurse();
  ...
  
}

int main() {

  ...
  recurse();
  ...
  return 0;
}

// ---------- this is going to be a infinite function 

// so we have to use the if else statement 

void recurse() {

  ...
  if (condition) {
    ...
  } else {
    recurse();
  } 
  ...
}

int main() {

  ...
  recurse();
  ...
  return 0;
}
*/

  // Example: C Recursion


// create a function to get this out put when we enter the input as 5
// 5 + 4 + 3 + 2 + 1 = 15

/*
#include <stdio.h>

int sum(int n);

int main() {
  int number, result;

  printf("Enter a positive integer: ");
  scanf("%d", &number);

  result = sum(number);
  
  printf("sum = %d", result);
  return 0;
} 

int sum(int n) {
  if (n != 0) {
    // sum() function calls itself
    return n + sum(n - 1);
  } 
  else {
    return n;
  }

}

*/

    // Programming Task 

/*
  Create a program that computes the factorial of a number.

    . Take an input from user
    . Pass the input value to a function.
    . Inside the fucntion check if the number is greater than 0.
    . If true, return number multiplied by a recursive call to the function with parameter 1 less than number
    . Otherwise, return 1.

*/

#include <stdio.h>

int func(int n);

int main() {
  
  int number;
  printf("Enter number: ");
  scanf("%d", &number);

  if (number > 0) {
    int result = func(number);
    printf("The result is: %d", result);

  } else {
    printf("Enter positive number");
  } 
  
  return 0;
}

int func(int n) {
  if (n == 1 || n == 0) {
    return 1;
  } else {
    return n * func(n -1);
  }
}