#include <stdio.h>  // Include for putchar

/* Prototype of the function */
void print_alphabet_x10(void);

void print_alphabet_x10(void) {
    int i;
    char ch;

    /* Loop 10 times */
    for (i = 0; i < 10; i++) {
        /* Loop through the alphabet */
        for (ch = 'a'; ch <= 'z'; ch++) {
            putchar(ch);  // Use putchar to print each character
        }
        putchar('\n');  // Print newline after each sequence
    }
}
