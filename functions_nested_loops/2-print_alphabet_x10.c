#include <unistd.h>

void _putchar(char c)
{
	write(1, &c, 1);
}

void print_alphabet(void)
{
	int i;
	char letter;

	// Repeat 10 times
	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);  // Print each letter
		}
		_putchar('\n');  // Print the new line after each iteration
	}
}

int main(void)
{
	print_alphabet();  // Call the function to print the alphabet 10 times
	return 0;
}
