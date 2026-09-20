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
        // Print letters
        for (int k = 0; k < i; k++) {
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }
    return 0;
}