#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // Print leading spaces for centering
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        int coef = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", coef);
            // Calculate next coefficient in Pascal's row
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}