int main() {
    int grade;

    // Ask user for input
    printf("Enter numerical grade: \n");
    scanf("%d", &grade);

    // Check if the grade is valid
    if (grade < 0 || grade > 100) {
        printf("Enter a valid grade please!\n");
    } else {
        // Determine the letter grade based on the input
        switch (grade / 10) {
            case 10: // For grade 100
            case 9:
                printf("Letter grade: A\n");
                break;
            case 8:
                printf("Letter grade: B\n");
                break;
            case 7:
                printf("Letter grade: C\n");
                break;
            case 6:
                printf("Letter grade: D\n");
                break;
            default:
                printf("Letter grade: F\n");
                break;
        }
    }

    return 0;
}
