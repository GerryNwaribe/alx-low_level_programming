#include <stdio.h>
/**
 * main - header
 * main - print alphabets in reverse
 *
 * Return: 0
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
{
	putchar(letter);
	letter--;
}
	putchar('\n');
	return (0);
}
