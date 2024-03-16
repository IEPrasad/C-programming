/*// Assign Value to array

int age[5] = {21, 29, 25, 32, 17};

5 = is size of the array 
{...} = elements of the array

and also we can use this like this
int age[] = {... ...};

if we create a array like this
int age[5] = {1, 3, 5};
another two values are fill by zero;
*/

/*

  // Access Array Elements
#include <stdio.h>

int main() {
  
  int age[5] = {21, 29, 25, 17};

  printf("the first value of the array: %d", age[0]);

  return 0;
}
*/

// Assign Values using index number

/*
#include <stdio.h>

int main() {

  int age[5];

  age[0] = 21;
  age[1] = 29;
  age[2] = 41;
  age[3] = 19;
  age[4] = 24;

  printf("%d ", age[0]);
  printf("%d ", age[1]);
  printf("%d ", age[2]);
  printf("%d ", age[3]);
  printf("%d ", age[4]);


  return 0;
}
*/

// ------- day 2 -------

// Change array Elements

// #include <stdio.h>

// int main () {

//   int age[5] = {21, 29, 25, 17, 34};
//   age[2] = 26;

//   printf("%d", age[2]);


//   return 0;
// }

// Loop and Array -------

// #include <stdio.h>

// int main() {


// int age[5];

// printf("Enter 5 input values: \n");

// scanf("%d", &age[0]);
// scanf("%d", &age[1]);
// scanf("%d", &age[2]);
// scanf("%d", &age[3]);
// scanf("%d", &age[4]);

// printf("%d", age[0]);
// printf("%d", age[1]);
// printf("%d", age[2]);
// printf("%d", age[3]);
// printf("%d", age[4]);


//   return 0;
// }


// ------------^^ instead of this code we can use vv this code 

#include <stdio.h>

int main() {


int age[5];

printf("Enter 5 input values: \n");

  for (int i = 0; i < 5; ++i) {
    scanf("%d", &age[i]);
  }

  for (int i = 0; i < 5; ++i) {
    printf("%d", age[i]);
  }
  

  return 0;
}















