#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of integers to be reversed
 * @n: number of elements in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i, j;

	/* Reverse the array in place */
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		/* Swap elements at positions i and j */
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
