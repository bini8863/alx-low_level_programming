#include "main.h"
#include <stdio.h>

/**
* _islower - a function which checks for lowercase character
* @c:  is the argument
* Return: 0
*/

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
	return (0);
}
