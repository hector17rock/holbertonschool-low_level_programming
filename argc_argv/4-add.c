#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string is a valid number
 * @str: the string to check
 *
 * Return: 1 if valid, 0 if not.
 */
int is_number(char *str)
{
	int i = 0;

	if (str[i] == '-' || str[i] == '+')  /* Handle signs */
		i++;

	for (; str[i] != '\0'; i++)  /* Check each character */
	{
		if (!isdigit(str[i]))  /* If any character is not a digit */
			return (0);
	}

	return (1);
}

/**
 * main - adds numbers passed as arguments and prints the result
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 on success, or 1 if there are non-numeric arguments.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	/* If no numbers are passed, print 0 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Start from argv[1] because argv[0] is the program name */
	for (i = 1; i < argc; i++)
	{
		/* Check if the current argument is a valid number */
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);  /* Exit with error if a non-number is found */
		}

		/* Add the number to the sum */
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);  /* Print the result */

	return (0);
}

