#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to print characters from.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0) /* Prints characters at even indices */
		{
			_putchar(str[i]);
		}
		i++;
	}

	_putchar('\n'); /* Print newline after the string */
}

