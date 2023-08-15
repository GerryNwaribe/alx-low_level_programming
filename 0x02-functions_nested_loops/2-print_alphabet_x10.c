#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabets ten times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 10)
	{
		char let = 'a';

		while (let <= 'z')
		{
			_putchar (let);
			let++;
		}
		_putchar ('\n');
		i++;
	}

}
