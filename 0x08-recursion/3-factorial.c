#include "main.h"

/**
* factorial - retrns factorial of a given number
* @n: the given number
* Return: the factorial and returns -1 indicating there is an error
*/

int factorial(int n)
{
	int next_factorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	next_factorial = (n - 1);
	return (n * next_factorial);

}
