#include "main.h"

/**
* reverse_array - reverse content of array
* @a: array
* @n: number of elements
*/

void reverse_array(int *a, int n)
{
	int i;
	char ch;
	n = strlen(a);
	
	for (i = 0; i < l/2; i++)
	{
		ch = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = ch;
	}
	printf("%s", a);
}
