#include "main.h"

/**
* rot13 - rot13 encoder
* @str: string to be encoded
* Return: addrss of the encoded string
*/

char *rot13(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] transform_2(str[i]);
		i++;
	}
	return (str);
}

/**
* transform_2 - helper which map a letter with it's root13 encoding
* @x: char to be encoded
* Return: the encoded char
*/

char transform_2(char x)
{
	char one[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char two[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijkla";
	int i = 0;
	char replacement = x;

	while (i < 52)
	{
		if (x == one[i])
		{
			replacement = two[i];
			break;
		}
		i++;
	}
	return (replacement);
}
