#include "main.h"
#include <string.h>

/**
* print_rev - prints a string in reverse
* @s: String to reserve
* Return: nothing
*/

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	{
		putchar(*(s + len));
	}
	putchar(10);
}
