#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
 * multiply - Multiplies two numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 */
void multiply(char *num1, char *num2)
{
	int len1, len2, i, j, carry, n1, n2, sum;
	int *result;

	len1 = str_len(num1);
	len2 = str_len(num2);
	result = calloc(len1 + len2, sizeof(int));
	if (!result)
		print_error();

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}

		if (carry)
			result[i + j + 1] += carry;
	}

	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
		printf("0");
	else
		while (i < len1 + len2)
			printf("%d", result[i++]);

	printf("\n");
	free(result);
}

/**
 * main - Entry point. Multiplies two numbers given as command-line arguments.
 * @argc: The number of arguments.
 * @argv: The argument vector.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		print_error();

	multiply(argv[1], argv[2]);
	return (0);
}

