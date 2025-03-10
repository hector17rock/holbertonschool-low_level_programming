#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to previously allocated memory.
 * @old_size: Size of the old memory block (in bytes).
 * @new_size: Size of the new memory block (in bytes).
 *
 * Return: Pointer to newly allocated memory,
 *         or NULL if new_size is 0 and ptr is not NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	/* If new_size == old_size, return ptr */
	if (new_size == old_size)
		return (ptr);

	/* If new_size == 0 and ptr is not NULL, free ptr and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, simply allocate new memory */
	if (ptr == NULL)
		return (malloc(new_size));

	/* Allocate new memory */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Copy old data to new memory (only up to the smaller size) */
	memcpy(new_ptr, ptr, (old_size < new_size ? old_size : new_size));

	/* Free the old memory */
	free(ptr);

	return (new_ptr);
}

