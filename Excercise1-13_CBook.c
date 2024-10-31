#include <stdio.h>

#define MAX_WORD_LEN 20 // Define the maximum word length to track

/* Exercise 1-13. Write a program to print a histogram of the lengths of words in its input.
   It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */
int main() {
    int c; // Variable to store each character read from input
    int length = 0; // Current length of the word being counted
    int lengths[MAX_WORD_LEN + 1] = {0}; // Array to count words of each length

    // Read characters until EOF (End Of File)
    while ((c = getchar()) != EOF) { // Correct placement of parentheses
        // Check for spaces, newlines, or tabs (indicates end of a word)
        if (c == ' ' || c == '\n' || c == '\t') {
            // If we just finished reading a word
            if (length > 0) {
                // Increment count for the word length
                if (length <= MAX_WORD_LEN) {
                    lengths[length]++; // Count the last word's length
                } else {
                    lengths[MAX_WORD_LEN]++; // Count as 'longer than MAX_WORD_LEN'
                }
                // Reset length for the next word
                length = 0; // Reset length for the next word
            }
        } else {
            // Increment the current word length for each character
            length++;
        }
    }

    // Check if there was a word at the end without a space (to handle the last word)
    if (length > 0) {
        if (length <= MAX_WORD_LEN) {
            lengths[length]++; // Count the last word's length
        } else {
            lengths[MAX_WORD_LEN]++; // Count as 'longer than MAX_WORD_LEN'
        }
    }

    // Print the histogram of word lengths
    printf("Histogram of word lengths:\n");
    for (int i = 1; i <= MAX_WORD_LEN; i++) {
        printf("%2d: ", i); // Print the word length (formatted to 2 spaces)
        for (int j = 0; j < lengths[i]; j++) {
            putchar('*'); // Print an asterisk for each word of this length
        }
        putchar('\n'); // Move to the next line after printing asterisks
    }

    // Handle words longer than MAX_WORD_LEN
    if (lengths[MAX_WORD_LEN] > 0) {
        printf("%2d+: ", MAX_WORD_LEN); // Print for lengths greater than MAX_WORD_LEN
        for (int j = 0; j < lengths[MAX_WORD_LEN]; j++) {
            putchar('*'); // Print an asterisk for each of these words
        }
        putchar('\n'); // Move to the next line
    }

    return 0; // Indicate that the program ended successfully
}
