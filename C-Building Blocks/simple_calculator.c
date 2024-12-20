#include <stdio.h>

void performOperations(int choice);

int main(){
    int choice;

    do{
        printf("This calculator is caliberated to only two digits.\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: \n");
        scanf("%d",&choice);
        if(choice !=5){
            performOperations(choice);
            }

    }while(choice !=5);

    printf("Exiting.....\n");
    return 0;
}

void performOperations (int choice) {
    double num1,num2,result;
 switch(choice){
    case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
    case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
    case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
    case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
             if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
    default:
            printf("Invalid Choice :/");
    
 }
}
