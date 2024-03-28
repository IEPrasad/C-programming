// Declaration multidimensional array

// Initialization of multidimensional array
/*
#include <stdio.h>

int main() {

  int arr[2][3] = {{1, 3, 5} , {2, 4, 6}};
  arr[0][2] = 7;
  arr[1][1] = 8;

  printf("%d\n", arr[0][2]);
  printf("%d", arr[1][1]);

  return 0;
}

*/

// Programming Task 

/*
Create a program that takes your full name as input and prints your name. Then, change the first letter of your name to X.

  . If your name is John Williams, it will become 
    Xohn Williams.
  
  . If your name is Julie Bing, it will become 
    Xuile Bing.

*/


#include <stdio.h>

int main() {

  char fname[50];
  char lname[50];

  printf("Enter your name: ");
  scanf("%s %s", fname, lname);

  fname[0] = 'X';
  printf("%s %s\n", fname, lname);

  return 0;
}


// ---------------------------------