#include "main.h"

/**
* _memset - fills the memory block with a costant byte
* @s: address to a memory block
* @b: the character being used
* @n: number of bytes to be used
* Return: pointer to memory block aka s
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
