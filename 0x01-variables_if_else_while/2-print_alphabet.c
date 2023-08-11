#include <stdio.h>
/**
 * main - header
 * main - print alphabets in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
{
	putchar(letter);
	letter++;
}
	putchar('\n');

	return (0);
}

