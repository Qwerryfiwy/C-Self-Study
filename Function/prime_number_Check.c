#include <stdio.h>
#include <stdbool.h>

bool prime_check(int n) {
    if (n <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    else{
    for (int i = 2; i < n; i++) { // Check divisors up to n/2
        if (n % i == 0) {
            return false; // Found a divisor, so not prime
        }
    }
    return true; // No divisors found, so it's prime
    }
}

int main() {
    int n;
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &n);

    if (prime_check(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
