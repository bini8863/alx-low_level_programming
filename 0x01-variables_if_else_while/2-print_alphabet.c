#include <stdio.h>

/**
* main - prints the alphabet in all lower chase
* Return: 0
*/

int main(void)
{
for (int x = 'A'; x <= 'Z'; x++)
{
	x = tolower(x);
	putchar(x);
}
return (0);
}

