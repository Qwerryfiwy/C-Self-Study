#include <stdio.h>
#include <string.h>

typedef struct {
    int age;
    char Name[100];
    double income;
    int credit_score;
    char loan_type[100];
    char employment[100];
} User;

void collect_user_details(User *user) {
    printf("Enter your age: ");
    scanf("%d", &user->age);

    printf("Enter your monthly income: ");
    scanf("%lf", &user->income);

    printf("Enter your employment type (Salaried/Self-employed): ");
    scanf("%s", user->employment);

    printf("Enter your credit score: ");
    scanf("%d", &user->credit_score);

    printf("Enter the type of loan (Personal/Home/Car): ");
    scanf("%s", user->loan_type);
}

int check_eligibility(User user) {
    if (strcmp(user.loan_type, "Personal") == 0) {
        if (user.age < 21 || user.age > 60) return 0;
        if (user.credit_score < 650) return 0;
        if (user.income < 20000) return 0; 
    } else if (strcmp(user.loan_type, "Home") == 0) {
        if (user.age < 18 || user.age > 65) return 0;
        if (user.credit_score < 700) return 0;
        if (user.income < 50000) return 0; 
    } else if (strcmp(user.loan_type, "Car") == 0) {
        if (user.age < 18 || user.age > 65) return 0;
        if (user.credit_score < 650) return 0;
        if (user.income < 30000) return 0;
    } else {
        printf("Invalid loan type selected.\n");
        return -1;
    }

    return 1; // Eligible
}

int main(){
    User user;
    printf("WELCOME TO LOAN ELIGIBILITY CHECK\n");
    printf("Please enter the following details:\n");
    collect_user_details(&user);
    int result = check_eligibility(user);
    if (result == 1) {
        printf("Congratulations! You are eligible for the loan.\n");
    } else if (result == 0) {
        printf("Sorry! You are not eligible for the loan.\n");
    }
}