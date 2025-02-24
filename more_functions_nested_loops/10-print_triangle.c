#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle of `#` characters.
 * @size: the size of the triangle.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');  /* Print a newline if size is 0 or negative */
	}
	else
	{
		for (i = 1; i <= size; i++)  /* Loop through rows */
		{
			for (j = 1; j <= size - i; j++)  /* Print leading spaces */
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)  /* Print `#` characters */
			{
				_putchar('#');
			}

			_putchar('\n');  /* Newline after each row */
		}
	}
}

