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
		write(1, "+1", 2);  /* Write '+' and '1' together */
		return (1);
	}
	else if (n == 0)
	{
		write(1, "0", 1);  /* Write '0' */
		return (0);  /* No need to print the return value here */
	}
	else
	{
		write(1, "-1", 2);  /* Write '-' and '1' together */
		return (-1);
	}
}
