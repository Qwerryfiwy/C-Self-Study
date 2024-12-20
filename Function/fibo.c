#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibo(n-2)+fibo(n-1);
    }
}
int main(int n) {
    // Your code starts here
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++){
        printf("%d,",fibo(i));
    }
    return 0;
}
