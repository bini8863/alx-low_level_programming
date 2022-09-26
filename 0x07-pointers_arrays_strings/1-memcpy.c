#include "main.h"

/**
* _memcpy - copies the source files to the destination
* @n: length of characters src holds.
* @dest: memory area destination
* @src: the src where the memory address  will be copied from
* Return: 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}
return (dest);
}
