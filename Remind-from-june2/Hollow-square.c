/*

#include <stdio.h>

int main () {

  int i, j, row;
  printf("Enter row number less than 10.");
  scanf("%d", &row);

  if (row <= 10 && row >= 1) {
    for (i = 1; i <= row; i++) {
      for (j = 1; j <= row; j++) {
        if (j == row || i == row || i == 1 || j == 1) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
  }

  return 0;
}

*/

// The out put of the code

/*

**********
*        *
*        *
*        *
*        *
*        *
*        *
*        *
*        *
**********

*/



/*

// --------------------------------------------------------

#include <stdio.h>

int main() {

  int i, j, row;
  printf("Enter row number less than 10: ");
  scanf("%d", &row);

  if (row >= 1 && row <= 10) {
    for (i = 1; i <= row; i++) {
      for (j = 1; j <= row; j++) {
        if (j == 1 || i == 1 || j == row || i == row || j == i) {
          printf("*");
        } else {
          printf(" ");
        }
      }
        printf("\n");
    }

  } else {
    printf("Enter row number less than.");
  }

  return 0;
}

*/
// The out put 

/*

**********
**       *
* *      *
*  *     *
*   *    *
*    *   *
*     *  *
*      * *
*       **
**********

*/
// ---------------------------------------------------------- 

// ----------------------------------------------------------
/*

#include <stdio.h>

int main() {

  int i, j, row;
  printf("Enter row number less than 10: ");
  scanf("%d", &row);

  if (row >= 1 && row <= 10) {
    for (i = 1; i <= row; i++) {
      for (j = 1; j <= row; j++) {
        if (j == 1 || i == row || j == i) {
          printf("*");
        } else {
          printf(" ");
        }
      }
        printf("\n");
    }

  } else {
    printf("Enter row number less than.");
  }

  return 0;
}

*/

/*

*
**
* *
*  *
*   *
*    *
*     *
*      *
*       *
**********

*/

// ------------------------------------------------------------


#include <stdio.h>

int main () {

  int i, j, row;
  printf("Enter row number less than 10: ");
  scanf("%d", &row);

  if (row <= 10 && row >= 1) {
    for (i = 1; i <= row; i++) {
      for (j = 1; j <= row; j++) {
        if (j == row || i == 1) {
          printf("*");
        } else {
          printf(" ");
        }
        
      }
      printf("\n");
    }
  }


  return 0;
}


// The out put of this code 

/*

**********
         *
         *
         *
         *
         *
         *
         *
         *
         *

*/




