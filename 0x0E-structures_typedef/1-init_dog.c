#include "dog.h"
#include <stdlib.h>

/**
* init_dog - creates a variable of type struct dog
* @d: the dog to be initialised
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
