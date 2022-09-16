#include "main.h"

/**
* main - fizz_bizz test
* @n1: parameter
* Return: 0
*/

int main(void)
{
	int n1 = 1;

	while (n1 < 100; n++)
	{
		if ((n1 % 3 == 0) && (n1 % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (n1 % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n1 % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n1);
		}
	}
	return (0);
}
