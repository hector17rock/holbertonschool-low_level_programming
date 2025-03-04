#include "main.h"

/**
 * factorial - Returns the factorial of a number
 * @n: The number to find the factorial of
 *
 * Return: The factorial of `n`, or -1 if `n` is negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);  /* Error case: factorial is not defined for negative numbers */
	}
	if (n == 0)
	{
		return (1);  /* Base case: 0! = 1 */
	}
	return (n * factorial(n - 1));  /* Recursive case */
}

