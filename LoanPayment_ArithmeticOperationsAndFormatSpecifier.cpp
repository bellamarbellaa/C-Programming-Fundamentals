#include <stdio.h>

int main() {
	float loan, interest_rate, monthly_interest_rate, monthly_payment, balance0, balance1, balance2, balance3;
	
	//Prompt user for input
	printf("Enter amount of loan: \n");
	scanf("%f", &loan);
	
	printf("Enter interest rate (already in percent): \n");
	scanf("%f", &interest_rate);
	
	printf("Enter monthly payment: \n");
	scanf("%f", &monthly_payment);
	
	monthly_interest_rate = interest_rate / 12 / 100;
	
	//Calculate and display remaining balance (to 2 decimal places) after each payment 
	 //Before payment
    balance0 = loan; 
    printf("Balance prior to first payment: $%.2f \n", balance0);
    
    //After first payment
    balance1 = balance0 + (balance0 * monthly_interest_rate) - monthly_payment;
    printf("Balance remaining after first payment: $%.2f \n", balance1);
    
    //After second payment
    balance2 = balance1 + (balance0 * monthly_interest_rate) - monthly_payment;
    printf("Balance remaining after second payment: $%.2f\n", balance2);
    
    //After third payment
    balance3 = balance2 + (balance0 * monthly_interest_rate) - monthly_payment;
    printf("Balance remaining after third payment: $%.2f\n", balance3);
    
    return 0;		
}
