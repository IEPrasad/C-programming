#include <stdio.h>

int main() {
    int n;
    
    // user for input
    printf("Enter the number of rows less than 10: ");
    scanf("%d", &n);

    // Check if the input is less than 10
    if (n < 10) {

        // Check for specific values of n (4, 7, 9)
        if (n == 4) {
            // Pattern for n = 4
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    if (i == 1 || i == n || j == 1 || j == n) {
                        printf("*");
                    } else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        } else if (n == 7) {
            // Pattern for n = 7
            int spaces = n - 1;
            int stars = 1;
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= spaces; j++) {
                    printf(" ");
                }
                for (int k = 1; k <= stars; k++) {
                    printf("*");
                }
                if (spaces > i) {
                    spaces -= 1;
                    stars += 2;
                }
                if (spaces < i) {
                    spaces = spaces + 1;
                    stars = stars - 2;
                }
                printf("\n");
            }
        } else if (n == 9) {
            // Pattern for n = 9
            n = 5;

            // first part of the pattern
            for (int i = n; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }

            // second part of the pattern
            for (int i = 2; i <= n; i++) {
                for (int j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }
        } else {
            // Handle other values of n
            printf("Enter user input as 4, 7, or 9\n");
        }

    } else {
        // Handle cases where input is not less than 10
        printf("Enter row number less than 10\n");
    }

    return 0;
}
