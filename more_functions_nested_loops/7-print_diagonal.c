#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: number of backslashes to print.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');  /* Print spaces before the backslash */
			}
			_putchar('\\');  /* Print the backslash */
			_putchar('\n');  /* Newline after each backslash */
		}
	}
}

