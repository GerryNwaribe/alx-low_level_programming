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
	unsigned int copy_len;
	char *c;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = " ";
		s2 = " ";

	}

	if (s1 != NULL)
	{
		len1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		len2 = strlen(s2);
	}
	if (len2 <= n)
		finalLen = len1 + len2 + 1;
	else
		finalLen = len1 + n;

	c = malloc(finalLen + 1);
	if (c == NULL)
	{
		return (NULL);
	}

	memcpy(c, s1, len1);

	copy_len = n < len2 ? n : len2;
	memcpy(c + len1, s2, copy_len);

	c[finalLen] = '\0';
	return (c);
}
