#include "main.h"

/**
* main - fizz_bizz test
* @n: parameter
* Return: 0
*/

int main(void)
{
	int n = 1;

	while (n++ < 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	return (0);
}
