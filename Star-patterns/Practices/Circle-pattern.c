#include <stdio.h>
#include <math.h>

int main() {
    int radius, i, j;
    float dist;

    // Asking for user input for the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    // Loop through the grid
    for (i = 0; i <= 2 * radius; i++) {
        for (j = 0; j <= 2 * radius; j++) {
            // Calculate the distance from the center of the circle
            dist = sqrt((i - radius) * (i - radius) + (j - radius) * (j - radius));
            
            // Print '*' if the distance is within the radius, else print ' '
            if (dist > radius - 0.5 && dist < radius + 0.5) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
