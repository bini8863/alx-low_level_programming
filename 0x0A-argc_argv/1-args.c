#include <stdio.h>

/**
* main - prints number of arguments passed to it
* @argc: number of arguments passed
* @argv: argument vector of pointers
*
* Return: always 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
