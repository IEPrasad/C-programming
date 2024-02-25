/* 
1. Write a program in C to display the pattern like 
right angle triangle using an asterisk.
The pattern like :

*
**
***
****


*/
/*
#include <stdio.h>

int main() {

  int i,j;

  for (i = 1; i <= 4; i++) {
    for (j = 1; j <= 4; j++) {
      if (j <= i) {
        printf("*");
      } else {
        printf(" ");
      }
    }
  
  printf("\n");
  }

  return 0;
}

*/

/*
  modify this code for take input value from user
  and create a pattern considering that value
*/ 


#include <stdio.h>

int main() {

  int i, j, inputValue;
  printf("Enter value less than 15: ");
  scanf("%d", &inputValue);

  if (inputValue < 15) {
    for (i = 1; i <= inputValue; i++) {
      for (j = 1; j <= inputValue; j++) {
        if (j <= i) {
          printf("*");
        } else {
          printf(" ");
        }
      }

    printf("\n");
  }
  } else {
    printf("Enter value less than 15!");
  }



  return 0;
}

// ------------


// #include <stdio.h>

// int home () {
//   printf("Heloo");
// }

// int main () {

//   home();
//   return 0;
// }












