#include <stdio.h>
#include <stdlib.h>

int main() {
    int h1, m1, s1, h2, m2, s2;
    
    // Input first time
    printf("Enter the first time (HH MM SS): \n");
    scanf("%d %d %d", &h1, &m1, &s1);

    // Input second time
    printf("Enter the second time (HH MM SS): \n");
    scanf("%d %d %d", &h2, &m2, &s2);

    // Convert both times to total seconds
    int total_seconds1 = h1 * 3600 + m1 * 60 + s1;
    int total_seconds2 = h2 * 3600 + m2 * 60 + s2;

    // Find the difference
    int diff_seconds = abs(total_seconds2 - total_seconds1);

    // Convert back to hours, minutes, seconds
    int hours = diff_seconds / 3600; // Get hours
    int remaining_seconds = diff_seconds % 3600; //Get remaining seconds after hours calculation
    int minutes = remaining_seconds / 60; //Get minutes from remaining seconds
    int seconds = remaining_seconds % 60; //Get seconds from remaining seconds after hours and minutes calculation

    // Print the result
    printf("The time difference is %d hour(s), %d minute(s), and %d second(s).\n", hours, minutes, seconds);

    return 0;
}


