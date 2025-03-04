#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the argument count (unused)
 * @argv: the argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;  /* Explicitly mark argc as unused */

	/* The program name is always the first argument in argv[] */
	printf("%s\n", argv[0]);

	return (0);
}

