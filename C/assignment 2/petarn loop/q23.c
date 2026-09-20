#include <stdio.h>

int main() {
    int cols;
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= cols; j++) {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}