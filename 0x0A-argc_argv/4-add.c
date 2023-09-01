#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argurment vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}


	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}

