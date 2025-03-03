#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the characters to match in the initial segment of s
 *
 * Return: number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s)  /* Iterate through the string s */
	{
		a = accept;
		while (*a)  /* Check if each character in accept matches the current s */
		{
			if (*s == *a)
				break;  /* If a match is found, stop checking accept */
			a++;
		}
		if (!*a)  /* If no match was found, break the loop */
			break;
		count++;  /* Increment count if the character is found in accept */
		s++;
	}
	return (count);  /* Return the number of matching bytes */
}

