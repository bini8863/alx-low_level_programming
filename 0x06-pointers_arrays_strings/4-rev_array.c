#include "main.h"

/**
* reverse_array - reverse content of array
* @a: array
* @n: number of elements
*/

void reverse_array(int *a, int n)
{
	int ch, i;

	for (i = n - 1; i > n / 2; i--)
	{
	ch = a[n - 1 - i];
	a[n - 1 - i] = a[i];
	a[i] = ch;
	}
}
