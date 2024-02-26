#include <stdio.h>

int main() {

  int i, j, input;
  printf("Enter Value: ");
  scanf("%d", &input);

  if (input < 10) {
    for (i = 1; i <= input; i++) {   
      for (j = 1; j <= input; j++) {
        printf("*");
        if (j == input) {
          printf("\n");
        }
      }
    }
  } else {
    printf("Enter value less than 10");
  }


  return 0;
}

// this is the out put when we input 5 

// *****
// *****
// *****
// *****
// *****