#include "main.h"

/**
 * wildcmp - Compare two strings, with support for wildcards
 * @s1: The first string
 * @s2: The second string, which may contain wildcards
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		if (*s1 == '\0')
		{
			return (wildcmp(s1, s2 + 1)); /* Skip the '*' */
		}
		else
		{
			return (wildcmp(s1 + 1, s2) ||
					wildcmp(s1, s2 + 1)); /* Match or skip '*' */
		}
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1)); /* Characters match, move both pointers */
	}

	return (0); /* Characters do not match */
}

