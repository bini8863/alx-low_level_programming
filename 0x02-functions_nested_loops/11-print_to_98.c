#include <stdio.h>

/**
* print_to_98 - prints all natural numbrs from input to 98,
* @n: the number where it start counting
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
	while (n > 98)
		printf("%d, ", n--);
	printf("%d\n", n);
	}
	else
	{
	while (n < 98)
		printf("%d, ", n++);
	printf("%d\n", n);
	}
}
