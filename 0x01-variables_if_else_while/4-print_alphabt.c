#include <stdio.h>

/**
* main - print alphabt except q and c
*
* Return: 0
*/

int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'q' && ch != 'e')
{
	putchar(ch);
}
}
putchar('\n');
result(0);
}
