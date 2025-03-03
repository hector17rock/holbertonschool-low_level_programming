#include "main.h"
#include <stddef.h>  /* For NULL */
#include <stdio.h>   /* For printf */

/**
 * _strpbrk - locates the first occurrence in a string of any character
 *            from another string.
 * @s: string to search.
 * @accept: characters to search for in s.
 *
 * Return: pointer to the first occurrence of any character from accept
 *         in s, or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)  /* Iterate through the string s */
	{
		char *a = accept;

		while (*a)  /* Check if the current character in s matches any in accept */
		{
			if (*s == *a)
				return (s);  /* Return pointer to the first matching character */
			a++;
		}
		s++;
	}

	return (NULL);  /* If no match is found, return NULL */
}

