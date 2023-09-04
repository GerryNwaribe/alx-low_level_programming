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
	if (argc != 2)
	{
	printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}

	int coins = 0;
	int coinValues[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coinValues) / sizeof(coinValues[0]);

	for (int i = 0; i < numCoins; i++)
	{
	coins += cents / coinValues[i];
	cents %= coinValues[i];
	}

	printf("%d\n", coins);

	return (0);
}
