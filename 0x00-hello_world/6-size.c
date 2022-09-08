#include <stdio.h>

/**
* main - prints various types of data
* Return: 0
*/
int main(void)
{
	char character;
	int integer;
	long int longerOne;
	long long int theLongest;
	float decimal;

	printf("Size of a char: %ld byte(s)\n", sizeof(character));
	printf("Size of an int: %ld byte(s)\n", sizeof(integer));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longerOne));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(theLongest));
	printf("Size of a float: %ld byte(s)\n", sizeof(decimal));
	return (0);
}
