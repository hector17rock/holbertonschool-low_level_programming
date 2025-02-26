#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the elements of an array of integers.
 * @array: The array to print.
 * @n: The number of elements to print.
 *
 * Return: void.
 */
void print_array(int *array, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", array[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}

