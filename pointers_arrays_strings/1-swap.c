#include "main.h"

/**
 * swap_int - swaps the value of two intergers
 * @a: pointer to the first interger
 * @b: pointer to the second interger
 */
void swap_int(int *a, int *b)
{
	int temp; /* Temporary variable to hold the value */

	temp = *a; /* Save the value of *a ina temporary variable */
	*a = *b; /* Assign the value of *b to */
	*b = temp; /* Assign the value of the temporary variable to *b */
}
