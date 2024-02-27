// /* 10. Write a C program for the get this out put

//      1
//     111
//    11111
//   1111111
//   1111111
//    11111
//     111
//      1


// */

#include <stdio.h>

int main() {

  int i, j, row;
  printf("Enter row number less than 10: ");
  scanf("%d", &row);


  if (row < 10) {
    for (i = 1; i <= row; i++) {
      for (j = i - 2; j < row; j++) {
        printf(" ");
      }
      for (j = 1; j <= row*2-1; j++) {
        if ( j <= 2 * i -1) {
          printf("1");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }

    for (i = 1; i < row + 1; i++) {
      for (j = i; j <= row * 2 + 1; j++) {
        if (j > 2 * i ) {
          printf("1");
        }
        else {
            printf(" ");
        }
      }
      printf("\n");
    }
  }


  return 0;
}

// #include<stdio.h>
// int main(){
//     int i,j,k,l,n,m,o,p;
//     scanf("%d", &n);
//     for(i=0; i<=n; i=i+1){
//         for(j=0; j<n-i; j=j+1){
//             printf(" ");
//         }
//         for(k=0; k<i; k=k+1){
//             printf("1");
//         }
//         for(l=0; l<=i; l=l+1){
//             printf("1");
//         }
//         printf("\n");
//     }

//     for(i=0; i<=n; i=i+1){
//         for(m=0; m<i; m=m+1){
//             printf(" ");
//         }
//         for(o=0; o<n-i; o=o+1){
//             printf("1");
//         }
//         for(p=0; p<=n-i; p=p+1){
//             printf("1");
//         }
//         printf("\n");
//     }
//     return 0;
// }