#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - funcion that executes a given parameter
* @array: array of elements
* @size: size of array
* @action: function pointer
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
