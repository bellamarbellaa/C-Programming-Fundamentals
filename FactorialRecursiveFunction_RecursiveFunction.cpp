#include <stdio.h>

// Recursive function to calculate factorial of a number
int fact(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n <= 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        // The function keeps calling itself with a smaller n
        // until it reaches the base case, then multiplies during the unwinding
        return n * fact(n - 1);
    }
}

int main() {
    // Call the recursive factorial function with input 4 and print the result
    printf("4! = %d\n", fact(4));
    
    return 0;
}
