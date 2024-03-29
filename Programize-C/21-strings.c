  // #include <stdio.h>

  // int main() {

  //   char str[] = "Programize";

  //     printf("%s", str);

  //   return 0;
  // }



//    String Inputs -----------

// Print the name of user 
/*
#include <stdio.h>

int main() {

  char str[20];

  printf("Enter your name: ");

  fgets(str, sizeof(str), stdinkk);

  printf("%s", str);


  return 0;
}


// if user input name as Isuru Eranda 
// The output will be 'Isuru Eranda'

*/

  //       Access characters of a String 
/*
  #include <stdio.h>

  int main() {

    char str[20] = "Programize";

    printf("%c\n", str[0]);
    printf("%c\n", str[1]);
    printf("%c\n", str[2]);
    printf("%c\n", str[3]);


    return 0;
  }

  */

    // Change Characters of Strings 

/*
  #include <stdio.h>

  int main() {

    char str[20] = "Programize";

    str[2] = 'O';
    str[4] = 'R';

    printf("%s", str);

    return 0;
  }

*/

  // ---------------------------------

  // Programming Task 

  /* 
    Create a program that takes your full name as input and prints your name. Then, change the first letter of your name to X.

    . If your name is John williams, it will become 
        Xohn Williams.

    . If your name is Juli Bing, it will become 
        Xuile Bing.
  
  */ 


  #include <stdio.h>

  int main() {

    char name[20];
    printf("Enter your name: ");

    scanf("%s", &name);
    // fgets(name, sizeof(name), stdin);
   
    // name[0] = 'X';

    printf("%s", name);


    return 0;
  }


// Q. What will be the value of the name variable provide Jack Sparrow as inpu value?

// char name [20];
// scanf("%s", &name);

// A. Jack Sparrow 
// B. Sparrow
// C. Jack
// D. Error

// As my knowledge the answer is 
//     B. Jack
