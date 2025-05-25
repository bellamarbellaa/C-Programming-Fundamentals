#include <stdio.h>

//Function Declaration: Declares that decompose takes a double and two pointers as parameters:
//one to long (for the integer part) and one to double (for the fractional part)
void decompose(double, long *, double *);

int main() {
    //Declare variables
    long i;
    double d;
    double num;

    //Call the decompose function with 3.1459128 
	//as well as the adresses of 'i' and 'd' as parameters
    decompose(3.1459128, &i, &d);
    
    //Prompt the user to enter a number and store input into num 
	printf("Enter a number: ");
	scanf("%lf", &num);  // Use &num to store input into the variable

	//Call the decompose function with the user-provided value 
	//as well as the addresses of 'i' and 'd' as parameters	
	decompose(num, &i, &d);
    return 0;
}

//Function Definition: Splits a double into its integer and fractional parts
void decompose(double x, long *int_part, double *frac_part) {
    //Store the integer part by type casting x to long
    *int_part = (long) x;

    // Calculate the fractional part by subtracting the integer part from x
    *frac_part = x - *int_part;

    //Display the results
    printf("The integer part of %.6f is %ld\n", x, *int_part);
    printf("The fractional part of %.6f is %f\n", x, *frac_part);
}
