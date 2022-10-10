#include <unistd.h>

/**
* _putchar - prints character c to stdout
* @c: the character to print
*
* Return: 1 on success
* On error, -1 is set.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
