#include "main.h"

/**
* _isdigit - checks weather c is a digit or not
* @c: the intiger being checked
* Return: 1 if success
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
		return (0);
}
