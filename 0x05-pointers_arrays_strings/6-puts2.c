#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * puts2 - prototype to print every other character
 * str - string
 * Return: 0
 */
void puts2(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i += 2)
	{
		write(1, &str[i], 1);
	}

	write(1, "\n", 1);
}
