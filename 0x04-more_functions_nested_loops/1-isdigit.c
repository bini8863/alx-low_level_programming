#include "main.h"

/**
* _isdigit - checks weather c is a digit or not
* @c: the intiger being checked
* Return: 1 if success
*/

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	else
		return (0);
}
