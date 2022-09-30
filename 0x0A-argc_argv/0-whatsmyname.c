#include <stdio.h>

/**
* main - prints the name of the program
* @argc: counter argument
* @argv: vector argument
* Return: 0
*/

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
	printf("%s", argv[i]);
	return (0);
	}
}
