#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print numbers
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}