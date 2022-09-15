#include "main.h"

/**
* _isupper - checks for upper case character
* @c: is the character to be checked
* Return: 1 if success
*/

int _isupper(int c)
{
int c;
if ((c >= 'A') && (c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
