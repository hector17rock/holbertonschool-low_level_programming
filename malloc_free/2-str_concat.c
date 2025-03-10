#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated memory space.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the newly allocated concatenated string,
 *         or NULL if allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1, len2, total_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	total_len = len1 + len2;
	concat = malloc((total_len + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	concat[total_len] = '\0';

	return (concat);
}

