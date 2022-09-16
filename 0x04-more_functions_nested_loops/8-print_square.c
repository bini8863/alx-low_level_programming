#include "main.h"

/**
* print_square - prints a square
* @size: parameter
* Return: nothing
*/

void print_square(int size)
{
	int s1, s2;

	if (size > 0)
	{
		for (s1 = 0; s1 < size; s1++)
		{
			for (s2 = 0; s2 < (size - 1); s2++)
			{
				putchar('#');

			}
			puchar('#');
			puchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
