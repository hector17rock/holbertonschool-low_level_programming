#include <stdio.h>

void _putchar(char c)
{
    putchar(c);
}

void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        _putchar(letter); // Print each letter
    }
    
    _putchar('\n'); // Print the newline after the alphabet
}

int main(void)
{
    print_alphabet(); // Call the function to print the alphabet
    return 0;
}

