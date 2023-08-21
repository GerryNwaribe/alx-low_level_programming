#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - prototype to print half of string
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index;
	int i;

	if (length % 2 == 0)
	{
	start_index = length / 2;
	}
	else
	{
	start_index = (length - 1) / 2;
	}

	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

