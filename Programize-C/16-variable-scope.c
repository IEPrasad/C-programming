
// Variable Scope in C

// ** In this lesson we'll learn about scope, 
//     local and global variables

    // ** Local Variable Scope 
    // ** Global Variable scope

  // Local Variable Scope (Local Scope)

// here an example 

/*
#include <stdio.h>

void addNumbers(int num1, int num2) {
  int result = num1 + num2;
  printf("Result = %d", result);

}

int main() {

  addNumbers(5, 6);
  return 0;
}
*/
// >> Result = 11

// -----------vvvvvv----------
/*
instead of printting the result inside the 
add number function let's print it after the 
function call 
*/
  // vvvvvv
/*
#include <stdio.h>

void addNumbers(int num1, int num2) {
  int result = num1 + num2;
  
}

int main() {

  addNumbers(5, 6);
  printf("Result = %d", result);
  return 0;
}
*/


// ----->> 
// *** This will make an error

/*
** this is where the concept of local 
variables comes in any variable that is 
declared inside the function is local to it 
*/

// ** meaning the result variable is local to 
// the add number functio. 
//   This reason is called local scope

// ** And the result variable has no existence outside 
// this scope
//   when the function ends the local variable are 
//   destroyed 
//   this is why we get an error when we try to use the 
//   result variable outside the local scope 


// -------- We can solove this problem by returning 
// result from the addNumber funtion 

// #include <stdio.h>

// int addNumbers(int num1, int num2) {
//   int result = num1 + num2;
//   return result;
// }

// int main() {

//   int sum = addNumbers(5, 6);
//   printf("Result = %d", sum);
//   return 0;
// }

// ------------------------------

//  -- Global Scope

// ** another way we can solve our earlier program 
// is using global variable.

// ** global variable are variables that are declared 
// outside of the funcution 



#include <stdio.h>
int result;
void addNumbers (int num1, int num2) {
  result = num1 + num2;
  printf("Result = %d", result);
}

int main() {

  addNumbers(5, 6);


  return 0;
} 

// >> Result = 11

// ** This is how to use the global variable to solve 
// this problem 
  // if we need we can use this "printf("Result = %d", result);" inside the scope or
  // outside the scope
  





















