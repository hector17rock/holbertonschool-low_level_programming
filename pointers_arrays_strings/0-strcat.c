#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenate two strings.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, const char *src)
{
	char *dest_ptr = dest;

	/* Move to the end of the destination string */
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	/* Append the source string to the destination string */
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	/* Null-terminate the concatenated string */
	*dest_ptr = '\0';

	return (dest);
}

/**
 * main - Check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);

	return (0);
}

