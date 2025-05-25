
#include <stdio.h>
#define SCALE_FACTOR (5.0/9.0f)
#define FREEZING_PT 32
#include <stdio.h>
int main() {
	
	float fahrenheit, celcius;
	
	printf("Enter FAHRENHEIT temperature: \n");
	scanf("%f", &fahrenheit);
	
	celcius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
	
	printf("CELCIUS equivalent: %.2f \n", celcius);
	
    return 0;
}
