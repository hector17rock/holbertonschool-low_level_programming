#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: the string to be modified.
 *
 * Return: the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;

	/* Iterate through each character in the string */
	while (str[i] != '\0')
	{
		/* Check if the character is a separator */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			capitalize = 1; /* Next character should be capitalized */
		}
		else if (capitalize && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 'a' + 'A'; /* Convert to uppercase */
			capitalize = 0; /* Stop capitalizing subsequent characters */
		}
		else
		{
			capitalize = 0; /* Do not capitalize other letters */
		}

		i++;
	}

	return (str); /* Return the modified string */
}

