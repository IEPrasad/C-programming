#include <stdio.h>

int main() {
    int num_of_st;
    printf("Enter the number of students: ");
    scanf("%d", &num_of_st);

    if (num_of_st > 0) {
        for (int i = 1; i <= num_of_st; i++) {
            float sum_of_marks = 0;
            printf("\nStudent %d:\n", i);
            float grades[3]; // Array to store grades of each student
            for (int j = 0; j < 3; j++) {
                printf("Enter grades for Exam %d: ", j + 1);
                scanf("%f", &grades[j]);
                sum_of_marks += grades[j];
            }
            float average = sum_of_marks / 3; // Calculate average for current student
            printf("Average grades for Student %d: %.2f\n", i, average);
        }
    } else {
        printf("Enter number of students greater than 0.\n");
    }

    return 0;
}
