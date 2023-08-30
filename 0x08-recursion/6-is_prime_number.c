#include "main.h"
/**
 * is_divisible - divider
 * @n: number
 * @div: divisor
 * Return: 0
 */
int is_divisible(int n, int div)
{
	if (div * div > n)
	{
		return (0);
	}
	else if (n % div == 0)
	{
		return (1);
	}
	else
	{
		return (is_divisible(n, div + 2));
	}
}
/**
 * is_prime_number -  prototype to find prime number
 * @n: number
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}

	return (!is_divisible(n, 3));
}
