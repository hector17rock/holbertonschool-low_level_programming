#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n characters from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of characters to concatenate from s2.
 *
 * Return: Pointer to newly allocated concatenated string,
 *         or NULL if memory allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = ""; /* Treat NULL as empty string */
	if (s2 == NULL)
		s2 = ""; /* Treat NULL as empty string */

	/* Calculate lengths of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* If n is greater than s2's length, use full s2 */
	if (n > len2)
		n = len2;

	/* Allocate memory for new string */
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 into concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy n characters from s2 */
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	concat[i] = '\0'; /* Null-terminate the string */

	return (concat);
}

