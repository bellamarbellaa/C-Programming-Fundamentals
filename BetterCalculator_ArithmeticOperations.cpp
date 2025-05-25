#include <stdio.h>
#include <math.h>>

int main() {
	float num1, num2;
	char op;
	
	printf("Enter your first number: \n");
	scanf("%f", &num1);
	
	printf("Enter your second number: \n");
	scanf("%f", &num2);
	
	printf("Enter your operator: \n");
	scanf(" %c", &op);
	
	
	if(op == '+') {
		printf("num1 + num2 = %.2f \n", num1 + num2);
	} else if(op == '-') {
		printf("num1 - num2 = %.2f \n", num1 - num2);
	} else if(op == '*') {
		printf("num1 * num2 = %.2f \n", num1 * num2);
	} else if(op == '/') {
		printf("num1 / num2 = %.2f \n", num1 / num2);
	} else if(op == '^') {
		printf("num 1^ num2 = %.2f \n", pow(num1, num2));
	} else {
		printf("Operator invalid, please enter between +, -, *, or /");
	}
	
	return 0;
}
