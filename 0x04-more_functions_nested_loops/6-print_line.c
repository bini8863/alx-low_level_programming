#include "main.h"

/**
* print_line - prints lines
* @n: number of times the line excutes
* Return: nothing
*/

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
