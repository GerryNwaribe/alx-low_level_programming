#include <stdio.h>
/**
 * main - header
 * main - print alphabets in upper and lowercase
 *
 * Return: 0
 */
int main(void)
{
	char lowCase = 'a';
	char uppCase = 'A';

	while (lowCase <= 'z')
{
	putchar(lowCase);
	lowCase++;
}
	while (uppCase <= 'Z')
{
	putchar(uppCase);
	uppCase++;
}
	putchar('\n');
	return (0);
}
