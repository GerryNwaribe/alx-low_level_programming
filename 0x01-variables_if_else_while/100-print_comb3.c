#include <stdio.h>
/**
* main - entry point
* main - print combo of to digits
*
* Return: 0
*/
int main(void)
{
int firstNum;

while (firstNum < 9)
{
int secNum = firstNum + 1;

while (secNum <= 9)
{
putchar (firstNum + '0');
putchar (secNum + '0');


if (firstNum != 8 || secNum != 9)
{
putchar (',');
putchar (' ');
}
secNum++;
}
firstNum++;
}

putchar ('\n');
return (0);
}
