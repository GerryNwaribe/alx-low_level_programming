#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	if (argc > 1)
	{
		printf("%d\n", argc);

	}
	else
	{
		printf("0\n");
	}
	return (0);

}
