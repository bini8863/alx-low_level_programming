#include "main.h"

/**
* _strchr - returns a pointer to the first occurence of character c
* @s: the string being checked
* @c: the character needed
* Return: returns c if its there and NULL if not
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
	s++;
	}
	return (NULL);
}
