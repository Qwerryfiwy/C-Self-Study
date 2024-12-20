#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Number of classes scheduled for each subject
#define P 78  // Physics
#define M 48  // Mathematics
#define EM 78 // Engineering Mechanics
#define C 63  // C Language
#define L 33  // Law
#define T 48  // Technical Communication

int main() {
    int subject; // To store the subject choice
    int no_of_classes_done; // To store the number of classes attended

    // Display menu for subject selection
    printf("Select a subject:\n");
    printf("1. Physics\n");
    printf("2. Mathematics\n");
    printf("3. Engineering Mechanics\n");
    printf("4. C Language\n");
    printf("5. Law\n");
    printf("6. Technical Communication\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &subject);

    switch (subject) {
        case 1: 
            printf("Physics\n");
            printf("Enter the number of classes attended: ");
            scanf("%d", &no_of_classes_done);
            printf("No of Extra Classes are/is: %d\n", P - no_of_classes_done);
            break;
        case 2:
            printf("Mathematics\n");
            printf("Enter the number of classes attended: ");
            scanf("%d", &no_of_classes_done);
            printf("No of Extra Classes are/is: %d\n", M - no_of_classes_done);
            break;
        case 3:
            printf("Engineering Mechanics\n");
            printf("Enter the number of classes attended: ");
            scanf("%d", &no_of_classes_done);
            printf("No of Extra Classes are/is: %d\n", EM - no_of_classes_done);
            break;
        case 4:
            printf("C Language\n");
            printf("Enter the number of classes attended: ");
            scanf("%d", &no_of_classes_done);
            printf("No of Extra Classes are/is: %d\n", C - no_of_classes_done);
            break;
        case 5:
            printf("Law\n");
            printf("Enter the number of classes attended: ");
            scanf("%d", &no_of_classes_done);
            printf("No of Extra Classes are/is: %d\n", L - no_of_classes_done);
            break;
        case 6:
            printf("Technical Communication\n");
            printf("Enter the number of classes attended: ");
            scanf("%d", &no_of_classes_done);
            printf("No of Extra Classes are/is: %d\n", T - no_of_classes_done);
            break;
        default:
            printf("Invalid choice. Please select a number between 1 and 6.\n");
    }

    return 0;
}
