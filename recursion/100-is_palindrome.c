#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;
	int i = 0;

	/* Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Compare characters from both ends */
	while (i < len / 2)
	{
		if (s[i] != s[len - i - 1])
		{
			return (0);
		}
		i++;
	}

	return (1);
}

