#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	/* Skip leading whitespace */
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
			s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
	{
		i++;
	}

	/* Handle signs (+ or -) */
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -1;  /* Mark negative number */
		}
		i++;  /* Move past the sign */
	}

	/* Debugging: print the current index and the character */
	printf("i = %d, sign = %d\n", i, sign);

	/* Convert the string to an integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');  /* Build the number */
		i++;
	}

	/* Debugging: print the result */
	printf("Result = %d\n", result);

	return (result * sign);  /* Apply the sign and return */
}

