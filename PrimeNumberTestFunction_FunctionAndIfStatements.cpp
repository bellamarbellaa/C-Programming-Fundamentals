#include <stdio.h>

// Function to check if a number is prime
int is_prime(int n) {
    int divisor;
    if (n <= 1) {
        return 0;  // Not a prime number
    }
    for (divisor = 2; divisor * divisor <= n; divisor++) {
        if (n % divisor == 0) {
            return 0;  // Not prime
        }
    }
    return 1;  // Prime
}

int main() {
    int n;

    // Ask the user to input a number
    printf("Enter an integer to check for prime: \n");
    scanf("%d", &n);  // Add & before n to properly read input

    // Call the is_prime function and display result
    if (is_prime(n)) {
        printf("The number %d is a prime number.\n", n);
    } else {
        printf("The number %d is not a prime number.\n", n);
    }

    return 0;
}
