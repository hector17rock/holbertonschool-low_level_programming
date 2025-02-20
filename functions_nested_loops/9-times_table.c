#include "main.h"

/**
 * print_9_times_table - Prints the 9 times table from 0 to 9.
 */
void print_9_times_table(void)
{
	int i, result;

	for (i = 0; i < 10; i++)
	{
		result = 9 * i;

		if (result >= 10)
		{
			_putchar((result / 10) + '0');  /* Print the tens place */
		}

		_putchar((result % 10) + '0');    /* Print the ones place */

		_putchar('\n');    /* New line after each result */
	}
}

