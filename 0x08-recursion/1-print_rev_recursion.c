#include "main.h"

/**
* _print_rev_recursion - prints the length of the string
* @s: the string printed
* Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
