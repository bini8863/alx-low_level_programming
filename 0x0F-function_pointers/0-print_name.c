#include "pointer_functions.h"
/**
* print_name - prints name.
* @name: pointer to name.
* @f: functuion pointer
*
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
