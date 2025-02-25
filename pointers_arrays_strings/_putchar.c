#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1);  /* Use the system call 'write' to print the character */
}

