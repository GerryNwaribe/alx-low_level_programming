#include <stdio.h>
/**
 * main - header
 * main - print all alphabet except q and e
 *
 * Return: 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
{
	if (letter != 'q' && letter != 'e')
	putchar(letter);
	letter++;
}
	putchar('\n');
	return (0);
}
