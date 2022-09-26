#include "main.h"

/**
* _strpbrk - searches a string for any bytes
* @s: string to check
* @accept: to check againist
* Return: pointer to byte if matches else null
*/

char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
