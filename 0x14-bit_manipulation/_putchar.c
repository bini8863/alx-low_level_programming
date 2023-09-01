#include <unistd.h>

/**
 * _putchar - prints c to stdout
 * @c: cahr to print
 * Return: 1 on sucess or -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

