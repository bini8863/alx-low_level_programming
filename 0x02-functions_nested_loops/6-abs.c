#include "main.h"
#include <stdio.h>

/**
* _abs - prints the absolute value of  a number
*  @c: is the argument
*  Return: 0
*/

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
