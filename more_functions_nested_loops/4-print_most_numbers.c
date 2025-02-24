#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9, except 4 and 6
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		/* Skip 2 and 4 only */
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');  /* Convert integer to character and print it */
		}
	}
	_putchar('\n');  /* Print a newline after the numbers */
}

