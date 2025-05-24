#include <stdio.h> //Include standard input and output library
#include <stdlib.h> //Include library that contains the abs() function for question 5

int main() { //Entry point of program execution, main function that returns the integer value of 0
	printf("\n------Question 1-----\n");
	//PURPOSE: to find the minimum number of banknotes needed to make up a given amount using the specified denominations

	//Initialize the variables
	int amount, count;
	int denominations[9] = {100000, 50000, 20000, 10000, 5000, 2000, 1000, 500, 100}; 
	
	 // Ask for the amount
    printf("Enter the amount: \n");
    scanf("%d", &amount);
    
	// Display the answer text
    printf("The minimum number of bank notes required for that amount is: \n");

	//Loop through denominations in the denominations array from largest (100000) to smallest (100)
	for(int i = 0; i < 9; i++) {
		count = amount / denominations[i]; //Calculate the amount of banknotes needed for each denomination
		amount %= denominations[i]; //Calculate the remaining amount of money prior after each denomination in the array
		printf("%d x %d \n", count, denominations[i]);  // Display the number of banknotes for each denomination used in the array
	}

	printf("\n-----Question 2-----\n");
	//PURPOSE: to find the sum of three digits number that the user enter
	
	//Initialize the variables
	int num, digit1, digit2, digit3, sum;
	
	//Ask for the user to input the number
	printf("Enter a 3-DIGITS number: ");
	scanf("%d", &num);
	
	//Ensure the user input is a valid 3 digits number
	if (num >= 100 && num <= 999) {
		//Extract each digit into the variables from the number that the user entered
		digit1 = num / 100; //Get the first digit (hundreds place)
		digit2 = (num / 10) % 10; //Get the second digit (tens place)
		digit3 = num % 10; //Get the third digit (ones place)
		
		//Sum all three digits and display the result
		sum = digit1 + digit2 + digit3;
		printf("The sum of three digits is %d \n", sum);
		
	//Display the message if number is not a valid 3 digits number	
	} else {
		printf("Number is out of range. Please enter a valid 3 digits number! \n");
	}
	
	printf("\n-----Question 3-----\n");
	//PURPOSE: to check whether or not the year entered by the user is a leap year 
	
	//Initialize the variable
	int year; 
	
	//Ask user for the year
	printf("Enter a year to check whether or not it's a leap year: \n");
	scanf("%d", &year);
	
	if(year % 4 == 0) {
		printf("Guess what? %d is a leap year \n", year);
	} else {
		printf("Sorry! The year %d is not a leap year \n", year);
	}
	
	printf("\n-----Question 4-----\n");
	//PURPOSE: to determine the average of the largest 3 out of 5 numbers entered by the user
	
	//Initialize the variables
	int num1, num2, num3, num4, num5, biggest, bigger, big, average;
	
	//Get the 5 integers from the user
	printf("Enter five integers(num1-num2-num3-num4-num5): \n");
	scanf("%d-%d-%d-%d-%d", &num1, &num2, &num3, &num4, &num5);
	
	//Comparing num1 and num2 to initialize two largest numbers (biggest and bigger)
	if (num1 > num2) {
		biggest = num1;
		bigger = num2;
	} else {
		biggest = num1;
		bigger = num2;
	}
	
	//Comparing num3 and the current 2 largest numbers to determine three largest numbers (biggest, bigger, big) 
	if (num3 > biggest) {
		biggest = num3;
		bigger = biggest; 
	} else if (num3 > bigger) {
		bigger = num3; 
		big = bigger; 
	} else { //if num3 < then num1 and num2, then it big is initialized to the value of num3
		big = num3; 
	}
	
	//Comparing num4 and the current 3 largest numbers to determine three largest numbers (biggest, bigger, big)
	//if num4 < big, the current values of biggest, bigger, and big does not change, so the condition for that is not needed
	if (num4 > biggest) {
		biggest = num4;
		bigger = biggest; 
	} else if (num4 > bigger) {
		bigger = num4;
		big = bigger;
	} else { //Check if num4 > big
		big = num4; 
	}
	
	//Comparing num 5 and the current 3 largest numbers to determine three largest numbers (biggest, bigger, big)
	//if num5 < big, the current values of biggest, bigger, and big does not change, so the condition for that is not needed
	if (num5 > biggest) {
		biggest = num5;
		bigger = biggest;
	} else if (num5 > bigger) {
		bigger = num5;
		big = bigger;
	} else { //Check if num5> big
		big = num5;
	}
	
	//Calculate and display the average of three largest numbers (biggest, bigger, big)
	average = (biggest + bigger + big)/3;
	printf("The average of 3 largest numbers is %d \n", average);
	
	printf("\n-----Question 5-----\n");
	//PURPOSE: to calculate the difference between two time values
	
	//Initialize the variables 
	int hour1, minute1, second1, hour2, minute2, second2, total_seconds1, total_seconds2; 
	int difference, diff_hours, diff_minutes, diff_seconds;
	
	//Read user input for the first time value
	printf("Enter the first time value (HH:MM:SS): \n");
	scanf("%d:%d:%d", &hour1, &minute1, &second1);
	
	//Read user input for the second time value 
	printf("Enter the second time value (HH:MM:SS): \n");
	scanf("%d:%d:%d", &hour2, &minute2, &second2);
	
	// Convert both times to total seconds
    total_seconds1 = hour1 * 3600 + minute1 * 60 + second1;
    total_seconds2 = hour2 * 3600 + minute2 * 60 + second2;
    
    //Calculate and display the difference between time in absolute value
    difference = abs(total_seconds1 - total_seconds2);

	//Convert back the difference in seconds into hours, minutes, and seconds
	diff_hours = difference / 3600; // Get hours
    difference %=  3600; //Get remaining seconds after hours calculation
    diff_minutes = difference / 60; //Get minutes from remaining seconds
    diff_seconds = difference % 60; //Get seconds from remaining seconds after hours and minutes calculation
    
    //Display the time difference in HH:MM:SS
    printf("The time difference is %d hour(s), %d minute(s), and %d second(s) \n", diff_hours, diff_minutes, diff_seconds);
	
	return 0; //Return value for the main function
}
