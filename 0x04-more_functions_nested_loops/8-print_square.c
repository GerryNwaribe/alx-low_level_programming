#include <stdio.h>
#include "main.h"
/**
 * print_square - print a square
 * @size: enter size of square
 *
 * Return: 0
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
		putchar ('\n');

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			putchar ('#');

		}
		putchar ('\n');

	}

}
