#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - header
 * main - print last digit of string
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int lastNum = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lastNum);
	}
	return (0);
}
