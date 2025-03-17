#include "3-calc.h"

/**
 * main - Performs simple mathematical operations
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, error codes otherwise
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	/* Check if the number of arguments is correct */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* Get the appropriate function */
	operation = get_op_func(argv[2]);

	/* Check if operation is NULL (invalid operator) */
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* Perform the operation */
	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}

