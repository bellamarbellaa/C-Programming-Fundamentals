#include <stdio.h>

int main() {
    int digit_count[10] = {0}; // Array to count occurrences of each digit (0-9)
    int digit;
    long n;

    // Prompt user for a number
    printf("Enter a number: \n");
    scanf("%ld", &n); // Read a long integer from the user

    // Count the digits
    while (n > 0) {
        digit = n % 10;             //Get the last digit
        digit_count[digit]++;       //Increment the corresponding index
        n /= 10;                    //Remove the last digit
    }

    //Print header row
    printf("\nDigit:        ");
    for (digit = 0; digit <= 9; digit++) {
        printf("%3d", digit);
    }

    //Print corresponding occurrences
    printf("\nOccurrences:  ");
    for (digit = 0; digit <= 9; digit++) {
        printf("%3d", digit_count[digit]);
    }

    return 0;
}

