#include <stdio.h>

float cal_average(float sum); 
int main() {

  int num_of_st;
  float Average;
  float sum_of_marks;
  float average[10];

  printf("Enter number of students: ");
  scanf("%d", &num_of_st);

  if (num_of_st > 0) {
    for (int i = 1; i <= num_of_st; i++) {
      printf("\nStudent %d\n", i);
      for (int j = 1; j <= 3; j++ ) {
        float marks;
        printf("\nEnter grades for Exam %d: ", j);
        scanf("%d", &marks);

        sum_of_marks += marks;
        
      }
        float average_mark = sum_of_marks / 3;
        average[i] = average_mark;
        printf("%d", average[i]);

    }
      printf("\nAverage grades:");
      for (int i = 1; i <= num_of_st; i++) {
        printf("\nStudent %d: %0.2f", i, average[i]);
      }


  } else {
    printf("\nEnter number of student grater than 0.");
  }
  
  // float cal_average(float sum) {
  //   float Average = sum_of_marks / 3;
  //   return Average;
  // }

  return 0;
}

