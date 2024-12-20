#include <stdio.h>

int main() {
    int n; // Number of rows in the top half of the pattern
    scanf("%d",&n);
    // Top half of the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++) {
            printf("%c ", 'A' + i);
        }
        printf("\n");
    }

    // Bottom half of the pattern
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++) {
            printf("%c ", 'A' + i);
        }
        printf("\n");
    }

    return 0;
}
