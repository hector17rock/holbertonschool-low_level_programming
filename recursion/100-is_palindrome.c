#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, string_length(s) - 1));
}

/**
 * string_length - Recursively calculates the length of a string
 * @s: The string whose length is to be calculated
 *
 * Return: The length of the string
 */
int string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + string_length(s + 1));
}

/**
 * check_palindrome - Recursively checks if a string is a palindrome
 * @s: The string to be checked
 * @left: The left index to compare
 * @right: The right index to compare
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (s[left] != s[right])
	{
		return (0);
	}
	return (check_palindrome(s, left + 1, right - 1));
}

