#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer to modify
 * @to: the string to set the pointer to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	/* Set the pointer s to point to string to */
	*s = to;
}

