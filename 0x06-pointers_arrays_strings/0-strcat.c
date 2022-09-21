#include "main.h"

/**
* _strcat - a function that concatinates two strings
* @dest: the file where we append on
* @src: the fule we append on dest
* Return: 0
*/

char *_strcat(char *dest, char *src)
{
	char dest[98] = "Hello";
	char src[] = "World!\n";
strcat(dest, src);
return (dest);
}
