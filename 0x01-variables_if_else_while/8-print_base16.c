#include <stdio.h>
/**
 * main - header
 * main - print base sixteen
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;
	char character = 'a';

	while (num <= 9)
{
	putchar(num + '0');
	num++;
}
	while (character <= 'f')
{
	putchar(character);
	character++;
}
	putchar('\n');
	return (0);
}
