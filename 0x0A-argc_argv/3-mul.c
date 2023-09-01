#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: arguement vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 1;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}



	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		sum *= num;
	}

	printf("%d\n", sum);
	return (0);
}
