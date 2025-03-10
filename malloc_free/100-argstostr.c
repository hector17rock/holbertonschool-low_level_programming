#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments into a single string, separated by \n
 * @ac: Argument count.
 * @av: Argument vector (array of strings).
 *
 * Return: Pointer to the concatenated string, or NULL if failure.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /* For newline character */
	}

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[pos] = av[i][j];
			pos++;
		}
		str[pos] = '\n';
		pos++;
	}

	str[pos] = '\0';
	return (str);
}

