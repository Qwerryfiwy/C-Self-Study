#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int n);
int main(int n) {
    // Your code starts here
    printf("Enter The Number");
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
    return n*factorial(n-1);}
}