#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
/**
 * string_nconcat - prototype to concatenate two strings with n bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int finalLen = 0;
	char *c;
	unsigned int a = 0;
	unsigned int b = 0;

	len1 = s1 ? strlen(s1) : 0;
	len2 = s2 ? strlen(s2) : 0;
	finalLen = len1 + len2 + 1;
	if (n < len2)
		c = malloc((len1 + n + 1) * sizeof(char));
	else
		c = malloc((finalLen) * sizeof(char));

	if (c == NULL)
	{
		return (NULL);
	}

	while (s1 && a < len1)
	{
		c[a] = s1[a];
		a++;
	}

	while (s2 && n < len2 && a < (len1 + n))
	{
		c[a++] = s2[b++];
	}

	while (s2 && n >= len2 && a < (len1 + len2))
	{
		c[a++] = s2[b++];
	}

	c[a] = '\0';
	return (c);
}
