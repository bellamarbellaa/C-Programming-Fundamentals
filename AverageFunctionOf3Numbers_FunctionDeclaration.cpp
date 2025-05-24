#include <stdio.h>

// Function declaration (prototype)
double average(int a[], int n);

int main() {
	int a[3]; 

    printf("Please enter three numbers:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }

    printf("Average: %.2f \n", average(a,3)); //Call the function and display average with 2 decimal places

    return 0;
}
\
// Function definition
double average(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return (double)sum / n; // Cast to double for accurate average
}
