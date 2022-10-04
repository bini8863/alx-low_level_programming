#include "main.h"

/**
* _strdup - points to a copy of the string clone.
* @str: string to be copied
* Return: Null if error, pointer allocated to space
*/

char *_strdup(char *str)
{
	char *clone;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	clone = malloc(sizeof(char) * (len + 1));

	if (clone == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		clone[i] = str[i];
	}

	clone[len] = '\0';
	return (clone);
}
