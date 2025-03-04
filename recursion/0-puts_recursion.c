#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: The string to print
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');  /* Add this line to print a newline at the end */
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

