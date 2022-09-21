#include "main.h"

/**
* infinite_add - adds two numbers
* @n1: first number to be added
* @n2: second number to be added
* @r: store result
* @size_r: size of buffer
* @return: pointer to result
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
* add_strings - adds the numbers stord in two strings
* @n1: string containing first number to be added
* @n2: string containing second number to be added
* @r: the buffer to store the result
* @r_index: the current index of the buffer
* Return: a pointer if r can store the sum else 0
*/

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;
	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n1; n1--; r_index++)
	{
		num = *(n1 - '0') + tens;
       		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;	
	}
	for (; *n2; n2--; r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
}
