#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, numCoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	numCoins = 0;

	numCoins += cents / 25;
	cents %= 25;

	numCoins += cents / 10;
	cents %= 10;

	numCoins += cents / 5;
	cents %= 5;

	numCoins += cents / 2;
	cents %= 2;

	numCoins += cents;
	printf("%d\n", numCoins);

	return (0);
}
