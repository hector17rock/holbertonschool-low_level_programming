#include "main.h"

/**
 * leet - encodes a string into 1337 (leet) speak.
 * @str: the string to be modified.
 *
 * Return: the modified string (encoded to 1337).
 */
char *leet(char *str)
{
	int i, j;
	char leet_chars[] = {'a', 'e', 'o', 't', 'l'};
	char leet_replacements[] = {'4', '3', '0', '7', '1'};

	/* Iterate through each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Compare each character with the 'leet' characters */
		for (j = 0; j < 5; j++)
		{
			/* If a match is found, replace the character */
			if (str[i] == leet_chars[j] || str[i] == leet_chars[j] - 32)
			{
				str[i] = leet_replacements[j];
				break;
			}
		}
	}

	return (str); /* Return the modified string */
}

