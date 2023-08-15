#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - function to list alphabets
 * main - Entry point
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		_putchar(let);
		let++;
	}
	_putchar('\n');
	return (0);
}
