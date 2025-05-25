#include <stdio.h>

int main() {
    // Declare a 2D array (3x3 matrix)
    int matrix[3][3];

    // Input elements of the matrix
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]); // Input for each cell
        }
    }

    // Display the matrix
    printf("\nThe matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]); // Print each element
        }
        printf("\n");
    }

    // Initialize sums to 0
    int barisPertama = 0;
    int barisKedua = 0;
    int barisKetiga = 0;

    // Calculate sum of each row
    for (int i = 0; i < 3; i++) {
        barisPertama += matrix[0][i]; // Sum of first row
        barisKedua += matrix[1][i];   // Sum of second row
        barisKetiga += matrix[2][i];  // Sum of third row
    }

    // Output the row-wise sums
    printf("\nSum of the first row: %d\n", barisPertama);
    printf("Sum of the second row: %d\n", barisKedua);
    printf("Sum of the third row: %d\n", barisKetiga);

    return 0;
}
