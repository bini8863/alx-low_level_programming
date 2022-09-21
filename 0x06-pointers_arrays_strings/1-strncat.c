#include "main.h"

/**
* _strncat - concatinates 2 strings but add inputted number of bytes
* @dest: string to be pappended upon
* @src: string to be completed at end of dest
* @n: a parameter for comparision
* Return: returns new concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
