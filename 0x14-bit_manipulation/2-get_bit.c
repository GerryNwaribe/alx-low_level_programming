#include "main.h"
/**
 * get_bit - function that returns the value of a bit
 * @n: number
 * @index: starting from 0 of the bit you want to get
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int shift;
	int a;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	shift = 1UL << index;
	a = n & shift;

	if (a)
		return (1);

	else
		return (0);
}
