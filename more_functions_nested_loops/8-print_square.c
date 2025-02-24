#include "main.h"

/**
 * print_square - prints a square of `#` characters.
 * @size: size of the square.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');  /* If size is 0 or negative, print a newline */
	}
	else
	{
		for (i = 0; i < size; i++)  /* Loop through rows */
		{
			for (j = 0; j < size; j++)  /* Loop through columns */
			{
				_putchar('#');  /* Print a `#` character */
			}
			_putchar('\n');  /* Newline after each row */
		}
	}
}

