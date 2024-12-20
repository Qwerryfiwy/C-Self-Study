#include <stdio.h>
#include <stdlib.h>

// Global variable to retain the balance
int CheckBalance = 100000;

void performOperation(int a);
void waitForKeyPressed();

int main() {
    int a;
    
    do {
        printf("\n1) Check Balance \n2) Deposit Money \n3) Withdraw Money \n4) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &a);

        if (a != 4) {
            performOperation(a);
            waitForKeyPressed();
        }
    } while (a != 4);

    printf("Thank you for using the ATM system!\n");
    return 0;
}

void performOperation(int a) {
    int depositBalance = 0;
    int withdrawlMoney = 0;

    switch (a) {
        case 1:
            printf("Your Balance is: %d\n", CheckBalance);
            break;

        case 2:
            printf("Enter the value to be deposited: ");
            scanf("%d", &depositBalance);
            CheckBalance += depositBalance;
            printf("Deposit successful! New Balance: %d\n", CheckBalance);
            break;

        case 3:
            printf("Enter the value to withdraw: ");
            scanf("%d", &withdrawlMoney);

            if (CheckBalance >= withdrawlMoney) {
                CheckBalance -= withdrawlMoney;
                printf("Withdrawal successful! New Balance: %d\n", CheckBalance);
            } else {
                printf("Insufficient Balance!\n");
            }
            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
            break;
    }
}

void waitForKeyPressed() {
    printf("Press Enter to continue...");
    getchar();  // Consume leftover newline character from previous input
    getchar();  // Wait for Enter key press
}
