#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_number - checks if a string is composed of only digits
 * @s: string to check
 * Return: 1 if only digits, 0 otherwise
 */
int is_number(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
 * multiply - Multiplies two numbers represented as strings
 * @num1: First number string
 * @num2: Second number string
 * Return: Result as a dynamically allocated string
 */
char *multiply(char *num1, char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2);
	int len = len1 + len2;
	int *result = calloc(len, sizeof(int));
	char *res_str;
	int i, j, carry, n1, n2, sum;

	if (!result)
		return (NULL);

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
		result[i + j + 1] += carry;
	}

	while (*result == 0 && len > 1)
	{
		result++;
		len--;
	}

	res_str = malloc(len + 1);
	if (!res_str)
		return (NULL);

	for (i = 0; i < len; i++)
		res_str[i] = result[i] + '0';
	res_str[len] = '\0';

	return (res_str);
}

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(argv[1], argv[2]);
	if (!result)
	{
		printf("Error\n");
		return (98);
	}

	printf("%s\n", result);
	free(result);

	return (0);
}

