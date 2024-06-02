#include <stdio.h>

int main() {
    
    int i, j, row;
    printf("Enter row number less than 10: ");
    scanf("%d", &row);
    
    if (row <= 10 && row >= 1) {
        for (i = 1; i <= row; i++) {
            printf("");
            
            for (j = 1; j <= i; j++) {
                printf("\n*");
            }
        }
    }
    
    return 0;
}




