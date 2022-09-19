#include "main.h"

/**
* _puts - prints a string
* @str: the string to print
*
* Description: prints a string
* On success: returns no error
*/

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++
	}
	putchar(10);
}
