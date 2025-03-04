#include <stdio.h>

/**
 * main - prints the number of command line arguments
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;  /* Prevent unused variable warning */

	/* Print number of arguments excluding program name */
	printf("%d\n", argc - 1);

	return (0);
}

