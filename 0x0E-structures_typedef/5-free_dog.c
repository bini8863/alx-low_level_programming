#include "dog.h"
#include <stdlib.h>

/**
* free_dog - frees dogs
* @d: the dog to be freed
* Return: void
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}


