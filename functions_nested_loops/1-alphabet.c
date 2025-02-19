#include <stdio.h>

void print_alphabet(void)
{
    char letter;

    // Loop through the alphabet, from 'a' to 'z'
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);  // Print each letter
    }

    putchar('\n');  // Print the new line after the alphabet
}

int main(void)
{
    print_alphabet();  // Call the function to print the alphabet
    return 0;
}
