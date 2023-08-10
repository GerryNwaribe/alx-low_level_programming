#include <stdio.h>
/**
 * main - print size of types
 *
 * Return: 0
 */
int main(void)
{
char a;
int num1;
long int num2;
long long int num3;
float num4;
printf("Size of a char: %zu byte(s)\n", sizeof(a));
printf("Size of an int: %zu byte(s)\n", sizeof(num1));
printf("Size of a long int: %zu byte(s)\n", sizeof(num2));
printf("Size of long long int: %zu byte(s)\n", sizeof(num3));
printf("Size of a float: %zu byte(s)\n", sizeof(num4));
return (0);
}
