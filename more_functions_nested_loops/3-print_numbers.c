#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 */
void print_numbers(void)
{
	int i;  /* Declare the loop variable outside the for loop */

	for (i = 0; i <= 9; i++)  /* Loop from 0 to 9 */
	{
		_putchar(i + '0');  /* Convert integer to char and print it */
	}
	_putchar('\n');  /* Print a newline after printing all numbers */
}

