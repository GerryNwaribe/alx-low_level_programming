#include <stdio.h>
/**
 * main - header
 * main - print base ten numbers
 *
 * Return: 0
 */
int main(void)
{
	int num;

	num = 0;

	while (num <= 9)
{
	putchar(num + '0');
	num++;
}
	return (0);
}
