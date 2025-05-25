#include <stdio.h>

// Recursive function to calculate power
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1; // Base case: any number raised to power 0 is 1
    } else {
        // Recursive case: multiply base with result of power(base, exponent - 1)
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base, exponent;

    // Ask the user to input the base
    printf("Enter base: ");
    scanf("%d", &base);

    // Ask the user to input the exponent
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Check if the exponent is non-negative
    if (exponent < 0) {
        // Negative exponents are not handled in this version
        printf("This version does not handle negative exponents.\n");
    } else {
        // Call the recursive function and display the result
        printf("%d raised to the power of %d is: %d\n", base, exponent, power(base, exponent));
    }

    return 0; // End of program
}
