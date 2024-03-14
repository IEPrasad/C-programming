#include <stdio.h>

int main() {

  int a = 299;

  printf("The value of a: %d", a);
  printf("\nThe address of the a: %p", &a);

  printf("\n\n");

  int *pta;
  pta = &a;

// or we can use this^^ in one line 
// like this 
// int *ptn = &a;


  printf("\nThe value of a: %d", *pta);
  printf("\nThe address of a: %p", pta);

  return 0;
}

// >> vv 
/*
The value of a: 299
The address of the a: 0061FEC8


The value of a: 299
The address of a: 0061FEC8
*/