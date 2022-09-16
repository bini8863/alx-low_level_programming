#include "main.h"

/**
* print_line - prints lines
* @n: the int which represents the lines
* Return: nosing
*/

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
