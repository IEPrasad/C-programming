#include <stdio.h>

int main() {

  int c;
  int sum = 0;
  int av;
  
  while (c == 5) {
    int score;
    printf("Enter score: ");
    scanf("%d", &score);

    sum = sum + score;
    c += 1;
  }
  av = sum / 25;
  printf("%0.2f", av);

  printf("The out put is: %d", sum);

  return 0;
}