  // #include <stdio.h>
  
  // int main() {
  
  //   int i, j, row, spaces;
  //   printf("Enter row number less than 10: ");
  //   scanf("%d", &row);
  
  //   if (row <= 10 && row >= 1) {  
  //     for (i = 1; i <= row; i++) {
  //       for (j = 1; j <= 2*row; j++) {
  //         if (j <= 2*i -1) {
  //           printf("*");
  //         } else{
  //           printf("");
  //         } 
  //       } spaces = 1;
  
  //     for (spaces = 1; spaces < row ; spaces--) {
  //       printf(" ");
  //     } 
         
  //       printf("\n");
  //     }
  
  
  //   } else {
  //     printf("Enter row number less than 10.");
  //   }
  
  //   return 0;
  // }

#include <stdio.h>

int main() {

  int i, j, row;
  printf("Enter row number less than 10: ");
  scanf("%d", &row);

  if (row <= 10 && row >= 1) {
    for (i = 1; i <= row; i++) {
      for (j = 1; j < 2*row; j++) {
        if (j >= i*2 -1) {
          printf("a");
        }
      } 
      printf("\n");    
    }


  } else {
    printf("Enter row number less than 10.");
  }


  return 0;
}















// This is not correct code 
// I couldn't write the correct code yet ...










