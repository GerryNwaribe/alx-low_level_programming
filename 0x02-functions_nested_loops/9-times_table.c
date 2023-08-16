#include<stdio.h>
#include"main.h"
/**
* times_table - print zero to ten times table
*
* Return: 0
*/
void times_table(void)
{
int rows, col, product;

for (rows = 0; rows <= 9; rows++)
{

for (col = 0; col <= 9; col++)
{
product = rows * col;
if (col == 0)
{
putchar (product + '0');

}

if (product < 10 && col != 0)
{
putchar (',');
putchar (' ');
putchar (' ');
putchar (product + '0');
}
else if (product >= 10)
{
putchar (',');
putchar (' ');
putchar ('0' + (product / 10));
putchar ('0' + (product % 10));
}

}

putchar('\n');
}
}
