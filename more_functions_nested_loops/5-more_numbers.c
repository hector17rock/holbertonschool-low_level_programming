#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 *                10 times, each on a new line
 */
void more_numbers(void)
{
	int i;
	int j;

	/* Loop to print the sequence 10 times */
	for (i = 0; i < 10; i++)
	{
		/* Loop for numbers from 0 to 14 */
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0'); /* Print the tens digit */
			}
			_putchar((j % 10) + '0'); /* Print the ones digit */
		}
		_putchar('\n'); /* Print a newline after each iteration */
	}
}

