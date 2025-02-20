#include <stdio.h>
#include <unistd.h>  /* For write() */

/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check.
 *
 * Return: 1 if n is greater than 0, 0 if n is 0, -1 if n is less than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		write(1, "+\n", 2);  /* Write '+' followed by newline */
		return (1);
	}
	else if (n == 0)
	{
		write(1, "0\n", 2);  /* Write '0' followed by newline */
		return (0);
	}
	else
	{
		write(1, "-\n", 2);  /* Write '-' followed by newline */
		return (-1);
	}
}
