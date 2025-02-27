#include "main.h"
#include <stdio.h>
#include <string.h>  /* for strlen */

/**
 * _strncat - Concatenates at most n characters from srcto dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to append.
 *
 * Return: The concatenated string.
 */
char *_strncat(char *dest, const char *src, int n)
{
	int i = 0;
	int dest_len = strlen(dest);

	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';  /* Null-terminate the result */
	return (dest);  /* Add parentheses */
}

