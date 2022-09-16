#include "main.h"

/**
* more_numbers - prints numbers from 0 to 14 ten times followed by a new line.
*/

void more_numbers(void)
{
int n, i;
for (i = 0; i < 10; i++)
{
for (n = 0; n <= 14; n++)
{
	if (n > 9)
	{
		putchar((n / 10) + '0');
	}
	putchar((n % 10) + '0');
}
putchar(10);
}
}
