#include "main.h"

/**
* print_triangle - prints triangle with # symbols
* @size: size parameter of the function
* Return: nothing
*/

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
		for ((j = size - i); j > 0; j--)
		{
			putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			putchar('#');
		}

		if (i == size)
		{
			continue;
		}
			putchar('\n');
		}
	}
}
