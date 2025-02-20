#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer whose absolute value is computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);  /* If n is negative, return its positive counterpart */
	else
		return (n);   /* If n is positive or zero, return it as is */
}
