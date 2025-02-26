#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to process.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	/* If the string length is odd, start from the middle character */
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len + 1) / 2;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

