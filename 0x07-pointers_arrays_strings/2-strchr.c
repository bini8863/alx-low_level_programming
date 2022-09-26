#include "main.h"

/**
* _strchr - returns a pointer to the first occurence of character c
* @s: the string being checked
* @c: the character needed
* Return: returns c if its there and NULL if not
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
