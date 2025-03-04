#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and prints the result
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 on success, or 1 if the arguments are not correct.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)  /* Check if exactly 2 arguments are passed */
	{
		printf("Error\n");
		return (1);  /* Exit with error code */
	}

	num1 = atoi(argv[1]);  /* Convert argument to integer */
	num2 = atoi(argv[2]);  /* Convert argument to integer */

	result = num1 * num2;  /* Multiply the two numbers */

	printf("%d\n", result);  /* Print the result */

	return (0);
}

