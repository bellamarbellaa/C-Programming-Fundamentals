#include <stdio.h>

int power(int base, int exponent) {
	if (exponent == 0) {
		return 1; //base case: anything raised to 0 is 1
	} else {
		return base * power(base, exponent - 1); //recursive function: base^exponent = base^exponent(n-1) until it reaches the base case
	}
}
int main() {
	int base, exponent;
	//Input from user
    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    //Check for non-negative exponent
    if (exponent < 0) {
        printf("This version does not handle negative exponents.\n");
    } else {
        printf("%d raised to the power of %d is: %d\n", base, exponent, power(base, exponent));
    }

    return 0;
}
	
