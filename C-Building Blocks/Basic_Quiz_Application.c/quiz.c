#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 256 //To get the Maximum value of character in a line 

void readQuestions(const char *filename) { //To read the questions from the file
    FILE *file = fopen(filename, "r"); //This code gets the file from the filename.
    if (!file) {
        printf("Error: Could not open file.\n");
        return; //It returns to the end of the function.
    }
 //else
    char line[MAX_LINE];// char line[256] is the array of characters that can hold a line of text.
    while (fgets(line, MAX_LINE, file)) {// Whlie getting the text from questions.txt file till 256 characters 
        printf("%s", line);//It prints the line of text from the file.
    }
    fclose(file);//Now Close :)
}

void addQuestion(const char *filename, const char *questionData) { //To add the question to the file
    FILE *file = fopen(filename, "a");
    if (!file) {
        printf("Error: Could not open file.\n");
        return;
    }
    fprintf(file, "%s\n", questionData);
    fclose(file);
}
void userMenu();
void adminMenu();
void addQuestion(const char *filename, const char *questionData);
void readQuestions(const char *filename);

int main() {
    // Your code starts here
    int role;
    printf("Quiz Application\n");
    printf("1. User\n");
    printf("2. Admin\n");
    printf("Enter your role: ");
    scanf("%d", &role);

    switch (role) {
        case 1:
            userMenu();
            break;
        case 2:
            adminMenu();
            break;
        default:
            printf("Invalid choice.\n");}

    return 0;
}

void userMenu() {
    FILE *file = fopen("questions.txt", "r");
    if (!file) {
        printf("Error: Could not open file.\n");
        return;
    }

    char line[MAX_LINE];
    int score = 0, total = 0;

    while (fgets(line, MAX_LINE, file)) {
        char question[128], opt1[32], opt2[32], opt3[32], opt4[32];
        int correctOption, userOption;

        sscanf(line, "%[^,],%[^,],%[^,],%[^,],%[^,],%d",
               question, opt1, opt2, opt3, opt4, &correctOption); //%[^,] is used to read the string until the comma is found.

        printf("\n%s\n1. %s\n2. %s\n3. %s\n4. %s\nYour answer: ",
               question, opt1, opt2, opt3, opt4);
        scanf("%d", &userOption);

        if (userOption == correctOption) score++;
        total++;
    }

    fclose(file);
    printf("\nQuiz Over! Your score: %d/%d\n", score, total);
}

void adminMenu() {
    int choice;
    do {
        printf("\nAdmin Menu\n");
        printf("1. Add Question\n");
        printf("2. View Questions\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                char question[256];
                printf("Enter question (format: question,option1,option2,option3,option4,correct_option):\n");
                scanf(" %[^\n]", question);
                addQuestion("questions.txt", question);
                break;
            }
            case 2:
                readQuestions("questions.txt");
                break;
            case 3:
                printf("Exiting admin menu.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);
}

