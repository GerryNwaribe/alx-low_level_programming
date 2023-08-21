#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int i, j;
	char temp;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{

		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}

}
