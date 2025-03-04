#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the diagonals of a square matrix.
 * @a: Pointer to the first element of the 2D array.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size + i));  /* Primary diagonal */
		sum2 += *(a + (i * size + (size - i - 1)));  /* Secondary diagonal */
	}

	printf("%d, %d\n", sum1, sum2);
}

