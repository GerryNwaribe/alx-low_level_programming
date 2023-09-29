#include "main.h"
/**
 *  print_binary - prints the binary rep of a num
 * @n: number to be converted
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	unsigned long int current_bit = 1;
	int a;

	if (n == 0)
	{
		_putchar('0');
		return;
	}


	while ((n & (current_bit << shift)) == 0)
	{
		shift--;
	}

	for (a = shift; a >= 0; a--)
	{
		_putchar((n & (current_bit << a)) ? '1' : '0');
	}
}
