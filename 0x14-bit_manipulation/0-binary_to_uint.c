#include "main.h"
/**
 * binary_to_uint - converts a binary num to an unsign int
 * @b: pointing to a string of 0 and 1 chars
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int lenght, a;

	if (b == NULL)
		return (0);

	lenght = strlen(b);

	for (a = 0; a < lenght; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);

		convert = convert * 2 + (b[a] - '0');
	}

	return (convert);
}
