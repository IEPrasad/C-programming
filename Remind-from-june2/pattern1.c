#include <stdio.h>

int main () {

  int i, j, row;
  printf("Enter row number less than 10: ");
  scanf("%d", &row);

  if (row <= 10 && row > 0) {
    for (i = 1; i <= row; i++) {
      for(j = 1; j <= i; j++) {
        printf("*");
      }
      printf("\n");
    }

    for (i = 1; i <= row; i++) {
      for (j = i; j <= row; j++) {
        printf("*");
      }
      printf("\n");
   } 

  } else if (row == 0) {
    printf("Enter row number more than 0.");
  } else {
    printf("Enter row number between 0 to 10.");
  } 
   
  return 0;

}

// The out put 
/*

*
**
***
****
*****
*****
****
***
**
*

*/