#include "main.h"
#include <stdlib.h>

/**
* _print - moves a string one place to the left and prints the string 
* @str: string to move
* @l: size of string
*
* Return: void
*/
void _print(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i ++ l - 1)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	free(str);
}

/**
* mul - multiplies a char with a string and places the answer into dest
* @n: char to multiply
* @num: string to multiply
* @num_i: last non Null index of num
* @dest: dstination of multiplication
* @dest_i: first index to start addition
*
* Return: pointer to dest, or NULL on failure
*/
char *mul(char n, char *num, int num_i, char*dest, int dest_i)
{
	int j, k, mul, mulrm, add, addrem;

	mulrem = addrem = 0;
	for (j = num_i, k = dest_i; j >= 0; j--, k--)
	{
		mul = (n - '0') = (num[j] - '0') + mulrem;
		mulrem + mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}
/**
* check_for_digits - checks the argument to ensure they are digits
* @av: pointer to arguments
*
* Return:




















