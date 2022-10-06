#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block using malloc and fr.
* @ptr: pointer to previously allocated memory.
* @old_size: size of allocated space for ptr
* @new_size: size of newly alocated space
*
* Return: pointer to newly allocated memory, or NULL if falilure
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, max = new_size;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
}
