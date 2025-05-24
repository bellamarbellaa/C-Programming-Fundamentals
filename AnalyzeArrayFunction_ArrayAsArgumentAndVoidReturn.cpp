#include <stdio.h>
#define SIZE 10

// Function to compute largest value, sum, average, and counts
void analyze_array(int a[], int n) {
	int i;
	float average;
	int largest = a[0], smallest = a[0];
	int sum = 0, positive = 0, negative = 0, above_avg = 0, below_avg = 0;

	// Find the largest element
	for(i = 0; i < n; i++) {
		if(a[i] > largest) {
			largest = a[i];
		}
	}
	
	// Find the smallest value
	for(i = 0; i < n; i++) {
		if(a[i] < smallest) {
			smallest = a[i];
		}
	}

	// Compute the sum
	for (i = 0; i < n; i++) {
		sum += a[i];  // fixed here
	}

	// Count positives
	for(i = 0; i < n; i++) {
		if(a[i] > 0) {
			positive++;
		}
	}

	// Count negatives
	for (i = 0; i < n; i++) {
		if(a[i] < 0) {
			negative++;
		}
	}	
	//Count average
	for (i = 0; i < n; i++) {
		average = (float)sum / n;
	}
		
	//Count values above average
	for (i = 0; i < n; i++) {
		if(a[i] > average) {
			above_avg++;
		}
	}
	
	//Count values below average
	for (i = 0; i < n; i++) {
		if(a[i] < average) {
			below_avg++;
		}
	}

	// Print results
	printf("The largest value in the array is %d \n", largest);
	printf("The smalest value in the array is %d \n", smallest);
	printf("The sum of values in the array is %d \n", sum);
	printf("The average value in the array is %.2f \n", average);
	printf("The number of positive values in the array is %d \n", positive);
	printf("The number of negative values in the array is %d \n", negative);
	printf("The number of values below the average is %d \n", below_avg);
	printf("The number of values above the average is %d \n", above_avg);
}

int main() {
	int x[] = {30, 20, -100, -30, 20};
	int n = 5;
	int y[SIZE];

	analyze_array(x, n);

	printf("Enter a test array with 10 integer values: \n");
	for(int i = 0; i < SIZE; i++) {
		scanf("%d", &y[i]); 
	}

	analyze_array(y, SIZE);

	return 0;
}
