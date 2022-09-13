#include "main.h"

/**
* _islower - returns '1' if it is lower case and '0' if not
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
