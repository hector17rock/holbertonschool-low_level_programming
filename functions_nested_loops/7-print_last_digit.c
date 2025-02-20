#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number from which the last digit will be extracted
 *
 * Return: The last digit of the number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;	/* Get the last digit */

	if (last_digit < 0)		/* If the number is negative */
	{
		last_digit = -last_digit;	/* Make the last digit positive */
	}

	_putchar('0' + last_digit);	/* Print the last digit as a character */

	return (last_digit);		/* Return the last digit */
}
