#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3;

    // Ask for user input
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    // Validate that the number is a three-digit integer
    if (number < 100 || number > 999) {
        printf("Invalid input. Please enter a three-digit number.\n");
        return 1;
    }

    // Extract the 3 digits in the number
    digit1 = number / 100;             // Hundreds place
    digit2 = (number / 10) % 10;       // Tens place
    digit3 = number % 10;              // Ones place

    // Calculate the sum of digits
    int sum = digit1 + digit2 + digit3;

    // Print the result
    printf("The sum of digits is: %d\n", sum);

    return 0;
}


