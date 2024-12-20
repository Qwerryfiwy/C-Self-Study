#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    int choice;
    int day, month, year;
    scanf("%d %d %d", &day, &month, &year);
    if(day >31 && day < 1 || month>12 && month<1){
        printf("Invalid Date");
    }
    if(day<4 && month<11 && year<2024){
        printf("Sorry! Out of DataBase");
    }
    
    return 0;
}