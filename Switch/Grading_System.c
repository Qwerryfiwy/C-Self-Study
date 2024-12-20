#include <stdio.h>

void getGrade(int score, char grade[]) {
    switch (score / 10) { // Divide score by 10 to determine the range
        case 10: // Score of 100
            sprintf(grade, "A*"); // Highest distinction
            break;
        case 9:  // Scores 90-99
            sprintf(grade, "A"); // Very good
            break;
        case 8:  // Scores 80-89
            sprintf(grade, "B1"); // Good
            break;
        case 7:  // Scores 70-79
            sprintf(grade, "B2"); // Fairly good
            break;
        case 6:  // Scores 60-69
            sprintf(grade, "C1"); // Satisfactory
            break;
        case 5:  // Scores 50-59
            sprintf(grade, "C2"); // Acceptable
            break;
        case 4:  // Scores 40-49
            sprintf(grade, "D1"); // Pass
            break;
        case 3:  // Scores 30-39
            sprintf(grade, "D2"); // Below pass
            break;
        case 2:  // Scores 20-29
            sprintf(grade, "E1"); // Poor
            break;
        case 1:  // Scores 10-19
            sprintf(grade, "E2"); // Very poor
            break;
        case 0:  // Scores 0-9
            sprintf(grade, "F"); // Fail
            break;
        default: // Invalid score (negative or above 100)
            sprintf(grade, "X"); // X for invalid scores
            break;
    }
}

int main() {
    int score;
    char grade[3]; // Array to hold the grade string

    // Prompt the user for input
    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    // Get the grade based on the score
    getGrade(score, grade);

    // Output the result
    if (grade[0] == 'X') {
        printf("Invalid score entered.\n");
    } else {
        printf("Your grade is: %s\n", grade);
    }

    return 0; // Successful termination
}
