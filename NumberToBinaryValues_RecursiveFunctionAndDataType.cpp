#include <stdio.h>
// Function to print the binary representation of a positive integer using recursion
void pb(int n) {
    if (n / 2 != 0) {
        pb(n / 2);               // Recursive call: move to higher bits first
        printf("%d", n % 2);     // Print the current bit (0 or 1)
    } else {
        printf("1");             // Base case: when dividing reaches 1, print the first '1'
    }
}

int main() {
	int number;
	
	//Prompt the user to enter a positive integer
    printf("Enter a positive integer: \n");
    scanf("%d", &number);
    
     //Special case: if number is 0, print '0' directly
    if (number == 0) {
        printf("0");
    } else {
        pb(number);  // Call the recursive function to print binary
    }

	return 0;
}



