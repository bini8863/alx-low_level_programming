#include "main.h"

/**
* puts2 - prints each character
* @str: string
*
* Return: nothing
*/

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(*(str + i));
			i++;
		}
	}
	putchar(10);
}
