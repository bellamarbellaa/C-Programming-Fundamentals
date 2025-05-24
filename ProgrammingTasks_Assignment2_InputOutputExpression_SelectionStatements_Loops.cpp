#include <stdio.h>
int main() { //Entry point of program execution, main function that returns the integer value of 0

	printf("\n------Question 1-----\n");
	 /*PURPOSE: This program asks the user to enter a positive integer and checks whether 
	 the number is a palindrome or not. A palindrome reads the same forward and backward*/
	
	//Declare the variables
	int number, temp, reversed = 0, remainder;
	
	//Ask the user for a positive integer and store it into "number" variable
	printf("Enter a positive integer: \n");
	scanf("%d", &number);
	
	//Save the original value into "temp" variable prior to modification for later comparison
	temp = number;
	
	/*Use a while loop to get the reverse number of the entered value by taking the digits 
	from the end of "number" and adding them to the "reversed" variable until the "number" reaches 0*/
	while (number != 0) {
		remainder = number % 10; //Get the last digit of the number 
		reversed = reversed * 10 + remainder; //Build the reversed number starting from the last digit of the original number
		number = number / 10; //Remove the last digit so the number decreases by one digit for each repetition
	}
	
	//Compare the original "number" with "reversed" variable and display appropriate message
	if(temp == reversed) {
		printf("Congratulations! The number %d is a palindrome \n", temp);
	} else {
		printf("Sorry! The number %d is not a palindrome \n", temp);
	}
	
	
	printf("\n-----Question 2-----\n");
	/*PURPOSE: This program checks a string character-by-character using getchar(),
	and counts how many vowels (a, e, i, o, u) it contains. It supports spaces and stops when Enter is pressed.*/
	
	//Declare the variables
	char str[100];  //Array to store up to 100 characters
    int i = 0, count = 0;
    char ch; //Temporary variable to store array element one by one
    
    //Ask for user input 
    printf("Enter a string (max: 100 characters, including spaces): \n");
    
    getchar();  // <-- consumes the leftover '\n' after printf that caused error previously
    
     /*Use a while loop to read characters one by one until Enter is pressed
    (newline character '\n') or until the maximum array size is reached.
	We use getchar() instead of scanf() to read character-by-character (including spaces)
	while ensuring the program can continue reading after spaces in the input
    Inside the loop:
    - Each character is stored in the array str[i]
    - The character is then checked using the 'ch' variable to see if it is a vowel
    - Finally, we move to the next position in the array
    */
    
    while ((ch = getchar()) != '\n' && i < 99) {
        str[i] = ch;  //Store character as element of the "str" array
        
         //Check if the current array element being stored in "ch" is a vowel
         if(ch == 'a'|| ch == 'e'  || ch == 'i'|| ch == 'o'|| ch == 'u'||
		 ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
		 	count++; //The vowel counter increases
		 }
		 
		i++;  //Move to next index in the array to be stored in "ch" and checked if it is a vowel 
	}
    
	//Display the number of vowels in the string entered
	printf("The number of vowels in \"%s\" is %d\n", str, count);
	
	printf("\n-----Question 3-----\n");
	/*PURPOSE: This generates and prints the Fibonacci sequence 
	up to a specified number of terms entered by the user*/
	
	//Declare the variables
	int n, next;
	int first = 0, second = 1; //Assign first and second terms in the fibonacci sequence to 0 and 1
	
	//Prompt the user to enter how many terms to generate and store it in "n"
    printf("Enter the number of terms: \n");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
    	if (i == 0) { //if user enter 1, just display the first term in the Fibonacci sequence (always 0)
    		printf("%d ", first);
		} else if (i == 1) { //if user enter 2, just display the second term in the Fibonacci sequence (always 1)
			printf("%d ", second);
		} else { //if user enter 3 or above
			next = first + second; //Third term onward is the sum of the previous two terms
			printf("%d ", next);
			/* Move forward in the sequence by updating the previous terms:
   			- Set 'first' to the value of 'second'
   			- Set 'second' to the value of 'next' (the new term) */
			first = second; 
            second = next;	
		}
	}
	
	printf("\n-----Question 4-----\n");
	/*PURPOSE: This program functions as a simple calculator that performs mathematical operations
	based on the operator type entered by the user (addition, substraction, multiplication, division*/
	
	//Declare variables to store two numbers and an operator
    float num1, num2;
    char op;
    
    //Ask for user to enter the first and second number
    printf("Enter your first number: \n");
    scanf("%f", &num1);

	printf("Enter your second number: \n");
    scanf("%f", &num2);
	
	//Ask for user to enter the operator
	printf("Enter your operator: \n");
    scanf(" %c", &op);  //Space before %c ensures proper reading of the character
    
    /*Use if-else statements to perform the operation based on the user's choice:
        - Addition (+)
        - Subtraction (-)
        - Multiplication (*)
        - Division (/)*/
    if (op == '+') {
    	printf("%f + %f = %.2f \n", num1, num2, num1 + num2);
	} else if (op == '-') {
		printf("%f - %f = %.2f \n", num1, num2, num1 - num2);
	} else if (op == '*') {
		printf("%f * %f = %.2f \n", num1, num2, num1 * num2);
	} else if (op == '/') {
		printf("%f / %f = %.2f \n", num1, num2, num1 / num2);
	} else {
		printf("Invalid operator \n");
	}
	
	printf("\n-----Question 5-----\n");
	/*PURPOSE: This program simulates a simple ATM (Automated Teller Machine) system. It prompts user to enter
	their PIN and display a menu with 5 options: 1) Check Balance 2) Deposit 3) Withdraw 4) Change PIN 5) Exit.
	Then, it allows users to either 1) view current balance, 2) add money to their account, 3) withdraw money, 4) change PIN
	or 5) exit. This program rejects incorrect initial PIN entry and continues to run (display menu) unless user selects Exit option*/
	//Declare variables
	int correct_pin = 1234; //default PIN
	int input_pin; //store user-entered PIN
	double balance = 1000.00; //starting balance
	int choice; //store user menu choice
	double deposit, withdraw; //store amount for deposit & withdraw
	int new_pin; //store user 
	
  	//Welcome message
	printf("Welcome to our ATM! \n");
	
	//Prompt user to enter PIN and save into "input_pin"
	printf("Enter your PIN please: \n");
	scanf("%d", &input_pin);
	
	//Check if PIN is correct prior to displaying the menu
	if (input_pin != correct_pin) {
    // Handle incorrect PIN input
    printf("Incorrect PIN. Access denied.\n");
    return 0;  // Exit the program
	} else {
    /*
        If the entered PIN is correct, display the menu and allow the user 
        to perform appropriate actions repeatedly.

        A do-while loop is used here to ensure that:
        - The menu is displayed at least once after successful login
        - The user can continue selecting options until they choose to exit
    */
	    do {
	        // Display menu options
	        printf("\n1. Check Balance\n");
	        printf("2. Deposit\n");
	        printf("3. Withdraw\n");
	        printf("4. Change PIN\n");
	        printf("5. Exit\n");
	        printf("Enter your choice: ");
	        scanf("%d", &choice);
	
	        // Perform actions based on user's choice
	        switch (choice) {
	            case 1:  // Check Balance
	                printf("Your current balance is $%.2f\n", balance);
	                break;
	
	            case 2:  // Deposit Money
	                printf("Enter the amount you want to deposit: ");
	                scanf("%lf", &deposit);  // Correct usage with & for address
	                if (deposit > 0) {
	                    balance += deposit;
	                    printf("$%.2f deposited successfully. Your new balance is $%.2f\n", deposit, balance);
	                } else {
	                    printf("Invalid deposit amount.\n");
	                }
	                break;
	
	            case 3:  // Withdraw Money
	                printf("Enter the amount you want to withdraw: ");
	                scanf("%lf", &withdraw);  // Correct usage with &
	                if (withdraw > 0 && withdraw <= balance) {
	                    balance -= withdraw;
	                    printf("$%.2f withdrawn successfully. Your new balance is $%.2f\n", withdraw, balance);
	                } else if (withdraw > balance) {
	                    printf("Sorry! You have insufficient balance.\n");
	                } else {
	                    printf("Invalid withdrawal amount.\n");
	                }
	                break;
	
	            case 4:  // Change PIN
	                printf("Enter your new PIN: ");
	                scanf("%d", &new_pin);
	                correct_pin = new_pin;
	                printf("Your PIN has been changed successfully.\n");
	                break;
	
	            case 5:  // Exit
	                printf("Thank you for using our ATM!\n");
	                break;
	
	            default:  // Invalid menu choice
	                printf("Invalid choice. Please select a valid option (1–5).\n");
	        }
	
	    } while (choice != 5);  // Repeat menu until user selects Exit
	}
	
	return 0;
}
