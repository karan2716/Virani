#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows (half-height): ");
    scanf("%d", &rows);

    // Upper Half
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower Half
    for (int i = 2; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}