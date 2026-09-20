#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Upper Half
    for (int i = 1; i <= rows; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Middle spaces
        for (int j = 1; j <= 2 * (rows - i); j++) {
            printf(" ");
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower Half
    for (int i = rows - 1; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Middle spaces
        for (int j = 1; j <= 2 * (rows - i); j++) {
            printf(" ");
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}