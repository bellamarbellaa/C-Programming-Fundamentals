#include <stdio.h> //Include standard input and output library

int main() {
	
	printf("-----Question 1-----\n");	
	//Initialize the variables
	int day, month, year;
	
	//Prompt the user to enter a date in mm/dd/yyyy format
	printf("Enter a date in (mm/dd/yyyy) format: \n");
	
	//Read user input for the date
	scanf("%d/%d/%d", &month, &day, &year);
	
	//Print the date in yyyymmdd format
	printf("The date you entered is %.4d%.2d%.2d \n\n", year, month, day);
	
	printf("-----Question 2-----\n");
	//Initialize the variables
	int item_number;
	float unit_price;
	int item_day, item_month, item_year;
	
	/* Prompt the user to enter the item number, unit price, and date,
   then read the user input */	
	printf("Enter item number (integer): \n");
	scanf("%d", &item_number);
	
	printf("Enter unit price ($): \n");
	scanf("%f", &unit_price);
	
    printf("Enter date (mm/dd/yyyy): \n");
    scanf("%d/%d/%d",&item_month, &item_day, &item_year  );
    
    //Print the header for the formatted product information to be displayed
    printf("\nItem\tPrice\tDate\n");
    
    /*Print the formatted product information with unit_price in 2 decimal places
    month and day displayed as 2 digits, and year displayed as 4 digits*/
    printf("%d\t$%.2f\t%.2d/%.2d/%.4d \n\n", item_number, unit_price, item_month, item_day, item_year);
    
    printf("-----Question 3-----\n\n");
    //Initialize the variables and set the values to 0 to prevent error down the line
    int num[4][4]; //A 2D array to store the 16 input numbers
	int row_sum[4] = {0};//An array to store the sum of each row
	int col_sum[4] = {0}; //An array to store the sum of each column
	int diagonal_sum1 = 0, diagonal_sum2 = 0; //Variables to store the sums of 2 diagonals
	
	
	/*Prompt the user to enter numbers from 1 to 16 and
	use nested loop to read the input values and store them in the num array*/
	printf("Enter the numbers from 1 to 16 (in any order with space between each other): \n");
	for (int i = 0; i < 4; i++) {
    	for (int j = 0; j < 4; j++) {
        	scanf("%d", &num[i][j]);
		}
	}
	
	// Print the numbers in the num array in a 4x4 matrix arrangement,
	/* with the \t (tab) used to align the numbers into columns and the
	\n (new line) to print the numbers in the next line after each row */
    printf("4x4 Grid of the 16 numbers entered: \n");
	
	for (int i = 0; i < 4; i++) {
    	for (int j = 0; j < 4; j++) {
        printf("%d\t", num[i][j]);
    	}
    	printf("\n");
	}
	
	//Calculate the row, column, and diagonal sums
	for (int i = 0; i < 4; i++) {
    	for (int j = 0; j < 4; j++) {
        	row_sum[i] += num[i][j];   // Summing the sum of each row
        	col_sum[j] += num[i][j];   // Summing the sum of each column
        
        	if (i == j) diagonal_sum1 += num[i][j];       // Sums the elements where row and column indices are equal (e.g., arr[0][0], arr[1][1])
        	if (i + j == 3) diagonal_sum2 += num[i][j];   // Sums the elements where the sum of row and column indices is 3 (e.g., arr[0][3], arr[1][2])
    	}
	}
	
	//Print the sums of each row
	printf("\nRow sums: ");
	for (int i = 0; i < 4; i++) {
    	printf("%d ", row_sum[i]);
	}
	
	//Print the sums of each column
	printf("\nColumn sums: ");
	for (int j = 0; j < 4; j++) {
    	printf("%d ", col_sum[j]);
	}
	
	//Print the sum of primary diagonal and secondary diagonal
   	printf("\nDiagonal sums: %d %d\n\n", diagonal_sum1, diagonal_sum2);
   	
	printf("-----Question 4-----\n");
	//Initialize the variables
	int number, tens, ones;
	
	//Prompt the user to enter a two-digit number
	printf("Enter a two-digit integer number: ");
	scanf("%d", &number);

	//    //Separate the digits to get the tens and ones digits
	tens = number / 10;
	ones = number % 10;
	
	//Print the reversed number
	printf("The reversal of the number you entered is: %d%d\n\n", ones, tens);

	printf("-----Question 5-----\n");
	//Initialize the string array that can hold the 3 numerical digits counted as character
	char numbers[4]; 

	//Prompt the user to enter a three-digit number (counted as a string array of characters)
	printf("Enter a three-digit number: ");
	scanf("%3s", numbers);  

	//Print the reversed number
	printf("The reversal is: %c%c%c \n\n", numbers[2], numbers[1], numbers[0]);
	
	printf("------Question 6-----\n");
	//Initialize the variables
	int decimal, octal1, octal2, octal3, octal4, octal5;
	
    // Prompt user input
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &decimal);

    //Ensure input is within range in between 0 and 32767 (inclusive)
    if (decimal >= 0 && decimal <= 32767) {

	    //Convert the 5-digit decimal number into octal format
	    octal5 = decimal % 8;
	    decimal /= 8;
	    octal4 = decimal % 8;
	    decimal /= 8;
	    octal3 = decimal % 8;
	    decimal /= 8;
	    octal2 = decimal % 8;
	    decimal /= 8;
	    octal1 = decimal % 8;
	
	    //Print result in 5-digit octal format (from octal5 to octal1)
    	printf("In octal, your number is: %d%d%d%d%d \n", octal1, octal2, octal3, octal4, octal5);
	} else {
		//Display the message if number is NOT between 0 and 32767
		printf("Invalid. Number is out of range \n");
	}	
 
	return 0; //Return value for the main function
}
