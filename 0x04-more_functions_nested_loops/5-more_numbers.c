#include "main.h"

/**
* more_numbers - prints numbers from 0 to 14 ten times followed by a new line.
*/

void more_numbers(void)
{
int n, i;
for (i = 0; i < 10; i++)
{
for (n = 48; n < 62; n++)
{
	putchar(n);
}
i++;
putchar(10);
}
}
