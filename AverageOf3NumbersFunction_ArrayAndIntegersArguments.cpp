#include <stdio.h>

// Function to calculate average of an array
double average(double a[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum / n;
}

// Function to calculate average of three individual numbers
double average2(double a, double b, double c) {
    return (a + b + c) / 3;
}

int main() {
    double x[3];

    // First method: using array and loop
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &x[0], &x[1], &x[2]);
    printf("Average (using array): %.2f\n", average(x, 3));

    // Second method: using direct function parameters
    double a, b, c;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Average (using individual parameters): %.2f\n", average2(a, b, c));

    return 0;
}
