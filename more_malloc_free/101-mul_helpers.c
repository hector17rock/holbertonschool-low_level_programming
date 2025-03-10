#include "101-mul.h"

/**
 * is_digit - Checks if a string consists of only digits.
 * @s: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * str_len - Computes the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int str_len(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * print_error - Prints an error message and exits with code 98.
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * allocate_result - Allocates memory for the result array.
 * @size: Size of the array.
 *
 * Return: Pointer to allocated memory.
 */
int *allocate_result(int size)
{
	int *result = calloc(size, sizeof(int));

	if (!result)
		print_error();
	return (result);
}

/**
 * print_result - Prints the final multiplication result.
 * @result: Array storing the digits of the result.
 * @size: Size of the result array.
 */
void print_result(int *result, int size)
{
	int i = 0;

	while (i < size && result[i] == 0)
		i++;

	if (i == size)
		printf("0");
	else
	{
		while (i < size)
			printf("%d", result[i++]);
	}

	printf("\n");
	free(result);
}

