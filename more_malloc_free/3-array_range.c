#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The starting value of the range.
 * @max: The ending value of the range.
 *
 * Return: Pointer to the newly created array,
 *         or NULL if min > max or if memory allocation fails.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1; /* Calculate the number of elements */
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i; /* Fill array with values from min to max */

	return (arr);
}

