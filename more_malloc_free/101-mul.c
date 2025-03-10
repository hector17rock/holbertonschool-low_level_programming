#include "101-mul.h"

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
	result = allocate_result(len1 + len2);

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

	print_result(result, len1 + len2);
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

