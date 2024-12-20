#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(float a, float b) {
    // Your code starts here
    int n;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\nDivision\nEnter Your Choice: ");
    scanf("%d",&n);
    switch(n){
    case 1:
    scanf("%f %f",&a,&b);
    printf("%.2f",a+b);
    case 2:
    scanf("%f %f",&a,&b);
    printf("%.2f",a-b);
    case 3:
    scanf("%f %f",&a,&b);
    printf("%f",a*b);
    case 4:
    scanf("%f %f",&a,&b);
    if(b!=0){
        printf("%f",a/b);
    }
    else{
        printf("ERROR: DIVISION BY ZERO");
    }
    }
    return 0;
}
