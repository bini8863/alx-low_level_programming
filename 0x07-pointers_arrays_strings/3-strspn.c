#include "main.h"

/**
* _strspn - prints the length of similar numbers numbers found in accpt
* @accept: the number being compared
* @s: first parameter
* Return: 0
*/

unsigned int _strspn(char *s, char *accept)
{
	size_t initial_length = 0;
	size_t s1 = strlen(s);
	size_t accept_1 = strlen(accept);

	for (size_t i = 0; i < s1; i++)
	{
		bool found_match = false;

		for (size_t j = 0; j < accept_1; j++)
		{
			if (s[i] == accept[j])
			{
			found_match = true;
			break;
			}
		}
		if (!found_match)
		{
			break;
		}
		else
			initial_length++;
	}
	return (initial_length);

}

