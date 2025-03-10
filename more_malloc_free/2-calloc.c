#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, initializing it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size (in bytes) of each element.
 *
 * Return: Pointer to allocated memory, or NULL if failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* Initialize allocated memory to 0 */
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}

