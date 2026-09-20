#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Find minimum distance to any border
            int min = i < j ? i : j;
            min = min < (n - 1 - i) ? min : (n - 1 - i);
            min = min < (n - 1 - j) ? min : (n - 1 - j);
            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}