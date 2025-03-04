#include "main.h"

/* Function prototype for sqrt_helper */
int sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of `n`, or -1 if `n` has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Error case: square root of negative number */
	}
	return (sqrt_helper(n, 1)); /* Start recursion with 1 as a guess */
}

/**
 * sqrt_helper - Helper function to find the square root
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The square root of `n`, or -1 if no natural square root exists
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess); /* Found the correct square root */
	}
	else if (guess * guess > n)
	{
		return (-1); /* No natural square root exists */
	}
	return (sqrt_helper(n, guess + 1)); /* Try the next guess */
}

