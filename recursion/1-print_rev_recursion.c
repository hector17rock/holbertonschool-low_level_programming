#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The string to be printed
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')  /* Base case: if the character is not the null terminator */
	{
		_print_rev_recursion(s + 1);  /* Recursive call with next character */
		_putchar(*s);  /* Print the current character */
	}
}

