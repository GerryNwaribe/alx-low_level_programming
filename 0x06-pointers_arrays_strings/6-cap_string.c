#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalize word
 * @a: pointer
 * Return: 0
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0 ||
				a[i - 1] == ' ' ||
				a[i - 1] == ',' ||
				a[i - 1] == ';' ||
				a[i - 1] == '.' ||
				a[i - 1] == '!' ||
				a[i - 1] == '?' ||
				a[i - 1] == '"' ||
				a[i - 1] == '(' ||
				a[i - 1] == ')' ||
				a[i - 1] == '{' ||
				a[i - 1] == '}' ||
				a[i - 1] == '\t' ||
				a[i - 1] == '\n')
		{
			if (a[i] >= 'a' && a[i] <= 'z')
				a[i] = a[i] - 32;
		}
	}
	return (a);

}
