#include <stdio.h>

/**
 * main - prints all command line arguments
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	/* Loop through all command line arguments */
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);  /* Print each argument on a new line */
	}

	return (0);
}

