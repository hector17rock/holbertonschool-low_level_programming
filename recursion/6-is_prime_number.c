#include "main.h"

/* Function prototype */
int check_prime(int n, int i);

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if the number is prime, 0 if it's not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0); /* 0 and 1 are not prime numbers */
	}
	return (check_prime(n, 2)); /* Start checking from 2 */
}

/**
 * check_prime - Helper function to check for prime recursively
 * @n: The number to check
 * @i: The current divisor to check
 *
 * Return: 1 if the number is prime, 0 if it's not
 */
int check_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1); /* No divisors found, n is prime */
	}
	if (n % i == 0)
	{
		return (0); /* Divisor found, n is not prime */
	}
	return (check_prime(n, i + 1)); /* Check with the next divisor */
}

