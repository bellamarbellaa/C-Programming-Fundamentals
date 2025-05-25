#include <stdio.h>
int main() {
	char ch;
	printf("Enter a character \n");
	ch = getchar(); //Reads a single character from standard input and returns an integer (ACSII value of character)
    
    putchar(ch); //The input to putchar() is an integer (ASCII value), but it prints the corresponding character represented.
    printf("\n");
	
	printf("The ACSII value of %c is %d", ch, ch);
    
    return 0;
}
