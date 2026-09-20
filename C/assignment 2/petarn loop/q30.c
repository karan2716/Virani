#include <stdio.h>

int main() {
    int size;
    printf("Enter size (odd number): ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (i == j || i + j == size + 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}