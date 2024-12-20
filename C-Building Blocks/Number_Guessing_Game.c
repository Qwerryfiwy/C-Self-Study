#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void randomNumber(int guess_number);

const int MIN=1;
    const int MAX=100;
    int NO_OF_GUESS=3;
int main(){
    int guess_number;
    printf("Lets Play a Number Gussing Game.\nYou have Three Chances\n");
    printf("Guess the Number HEHE: ");
    randomNumber(guess_number);
    
}

void randomNumber(int guess_number){
    srand(time(0));
    int answer= (rand()%MAX)+MIN;
while (NO_OF_GUESS!=0){
int guess_number;
    scanf("%d",&guess_number);
    if(answer==guess_number){
        printf("You Win!!\n");
        NO_OF_GUESS--;
        break;
    }
    else if(answer>guess_number){
        printf("Go Higher\n");
        NO_OF_GUESS--;
    }
    else if(answer<guess_number){
        printf("Go Lower\n");
        NO_OF_GUESS--;
    }}
if(NO_OF_GUESS==0){
    printf("YOU Lose\n");
}
}

