#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string.
 * @str: The string to evaluate.
 *
 * Return: Number of words.
 */
int word_count(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of words, or NULL if failure.
 */
char **strtow(char *str)
{
	char **words;
	int i, j = 0, k, len, wc, start, end;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = word_count(str);
	if (wc == 0)
		return (NULL);

	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < wc; i++)
	{
		while (str[j] == ' ')
			j++;
		start = j;
		while (str[j] != ' ' && str[j] != '\0')
			j++;
		end = j;
		len = end - start;

		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			while (i >= 0)
				free(words[i--]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			words[i][k] = str[start + k];
		words[i][len] = '\0';
	}
	words[wc] = NULL;
	return (words);
}

