#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * fizz_buzz - funtion defination that does the magic
 *
 * Return:  0
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
			printf("%d ", i);
	}

	printf("\n");
}

int main(void)
{
	fizz_buzz();
	return (0);
}
