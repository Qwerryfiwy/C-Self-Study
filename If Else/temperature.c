#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Farhenheit (c * (9.0 / 5)) + 32
#define Celcius ((f - 32) * 5.0) / 9

int main() {
    double f, c; // Use double for higher precision
    int choice;
    printf("1. Fahrenheit To Celsius\n2. Celsius To Fahrenheit\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the Temperature in Celsius: ");
            scanf("%lf", &c); // Use %lf for double
            printf("Temperature in Fahrenheit: %.2lf\n", Farhenheit);
            break;
        case 2:
            printf("Enter the Temperature in Fahrenheit: ");
            scanf("%lf", &f); // Use %lf for double
            printf("Temperature in Celsius: %.2lf\n", Celcius);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    return 0;
}