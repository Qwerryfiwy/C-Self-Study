#include <stdio.h>

int main() {
    int n; // Number of rows in the pyramid
    int count = 1; // Start number

    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &n);

    // Generate the pyramid
    printf("Pyramid Structure:\n");
    for (int i = 0; i < n; i++) {
        // Print leading spaces for alignment
        for (int s = 0; s < n - i - 1; s++) {
            printf(" ");
        }

        // Print numbers for the current row
        for (int j = 0; j <= i; j++) {
            printf("%3d", count++);
        }
        printf("\n");
    }

    return 0;
}
