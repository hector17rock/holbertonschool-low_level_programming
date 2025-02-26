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

	/* Skip whitespace */
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
			s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
	{
		i++;
	}

	/* Check for a sign */
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}

	/* Convert string to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}

