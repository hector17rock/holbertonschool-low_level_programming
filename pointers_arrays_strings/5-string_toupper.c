#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase.
 * @str: the string to be modified
 *
 * Return: the modified string (converted to uppercase)
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')  /* Check if the character is lowercase */
		{
			*ptr = *ptr - 'a' + 'A';  /* Convert to uppercase */
		}
		ptr++;  /* Move to the next character */
	}

	return (str);  /* Return the modified string */
}

