#include <stdio.h> 
#define INITIAL_BALANCE 100.00f
#define NUM_RATES ((int)(sizeof(value)/sizeof(value[0])))

int main() {
	int i, low_rate, num_years, year;
	double value[5];
	
	printf("Enter interest rate: \n");
	scanf("%d", &low_rate);
	printf("Enter number of years: \n");
	scanf("%d", &num_years);
	
	//Print Headers
	printf("%-6s","Years");
	for (i = 0; i < NUM_RATES; i++ ) {
		printf("%-10d%%", low_rate + i);
		value[i] = INITIAL_BALANCE;
	}
	
	printf("\n");
	
	for (year = 1; year <= num_years; year++ ) {
		printf("%-6d", year);
		
		for(i = 0; i < NUM_RATES; i++) {
			value[i] += (low_rate + i) / 100.00 * value[i]; //Compound Interest
			printf("%-10.2f", value[i]);
		}
		printf("\n"); 
	}
	return 0;	
}
