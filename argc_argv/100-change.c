#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int cents, coins, i;
	int denominations[] = {25, 10, 5, 2, 1};
	int num_denominations = sizeof(denominations) / sizeof(denominations[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	coins = 0;

	if (cents < 0)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < num_denominations; i++)
	{
		while (cents >= denominations[i])
		{
			cents -= denominations[i];
			coins++;
		}
	}

	printf("%d\n", coins);
	return (0);
}

