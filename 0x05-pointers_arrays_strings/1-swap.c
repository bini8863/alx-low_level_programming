#include "main.h"

/**
* swap_int - swaps the value of two elements
* @a: first parameter
* @b: second parameter
* Return: nothing
*/

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
