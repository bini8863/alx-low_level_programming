#include "main.h"

/**
* _strspn - prints the length of similar numbers numbers found in accpt
* @accept: the number being compared
* @s: first parameter
* Return: 0
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			break;
		}
		if (!accept[j])
			break;
	}
	return (i);

}

