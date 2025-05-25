#include <stdio.h>

#define NUM_QUIZZES 5        //Number of quizzes per student
#define NUM_STUDENTS 5       //Number of students

int main() {
    int grades[NUM_STUDENTS][NUM_QUIZZES]; //2D array to store quiz grades
    int student, quiz, high, low, total;

    //Input Section: Prompt user to enter grades for each student
    for (student = 0; student < NUM_STUDENTS; student++) {
        printf("Enter the grades for student %d: ", student + 1);
        for (quiz = 0; quiz < NUM_QUIZZES; quiz++) {
            scanf("%d", &grades[student][quiz]);
        }
    }

    //Display header for student results
    printf("\n%-10s%-10s%-10s\n", "Student", "Total", "Average");

    //Calculate and print total and average for each student
    for (student = 0; student < NUM_STUDENTS; student++) {
        total = 0;
        for (quiz = 0; quiz < NUM_QUIZZES; quiz++) {
            total += grades[student][quiz];
        }
        printf("%-10d%-10d%-10d\n", student + 1, total, total / NUM_QUIZZES);
    }

    //Display header for quiz statistics
    printf("\n%-10s%-10s%-10s%-10s\n", "Quiz", "Average", "High", "Low");

    //Calculate and print average, highest, and lowest for each quiz
    for (quiz = 0; quiz < NUM_QUIZZES; quiz++) {
        total = 0;
        high = 0;
    	low = 100; //Re-initialize low, high, and total numbers for every quiz

        for (student = 0; student < NUM_STUDENTS; student++) {
            int grade = grades[student][quiz];
            total += grade;
            if (grade > high) {
            	high = grade;
			}
            if (grade < low) {
            	low = grade;
			}
        }

        printf("%-10d%-10d%-10d%-10d\n", quiz + 1, total / NUM_STUDENTS, high, low);
    }

    return 0;
}
