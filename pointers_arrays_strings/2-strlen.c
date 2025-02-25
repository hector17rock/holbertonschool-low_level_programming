#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @str: pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int length = 0;  /* Indentation with tabs */

	while (*str != '\0')  /* Loop until we reach the null-terminator */
	{
		length++;  /* Increment length for each character */
		str++;     /* Move to the next character */
	}

	return (length);  /* Correct indentation and parentheses */
}
