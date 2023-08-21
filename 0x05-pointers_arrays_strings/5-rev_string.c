#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - prototype to print string in reverse
 * @s: string
 * Return: 0
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int a, b;
	char tempVar;

	for (a = 0, b = length - 1; a < b; a++, b--)
	{

		tempVar = s[a];
		s[a] = s[b];
		s[b] = tempVar;
	}
}
