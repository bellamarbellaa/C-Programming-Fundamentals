#include <stdio.h>

int main() {
    char word[50];  // Array to store the word
    int count = 0, length;

    printf("Enter a word: ");
    scanf("%s", word);  // Reads a single word (no spaces)

    for (length = 0; word[length] != '\0'; length++) {  // Find length of word
        // Check if the current character is a vowel
        if (word[length] == 'A' || word[length] == 'E' || word[length] == 'I' ||
            word[length] == 'O' || word[length] == 'U' || word[length] == 'a' ||
            word[length] == 'e' || word[length] == 'i' || word[length] == 'o' || word[length] == 'u') {
            count++;
        }
    }

    printf("Number of vowels: %d\n", count);

    return 0;
}
