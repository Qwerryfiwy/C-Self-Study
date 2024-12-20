#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Your code starts here
    int i=3;
    int j=4;
    printf("%d\n",i);
    printf("%u\n",&i);
    printf("%d\n",j);
    printf("%u\n",&j);

    int* ptr=&i;
    printf("%u\n",ptr);
    return 0;
}