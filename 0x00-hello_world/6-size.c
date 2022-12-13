#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char varcharacter;
	int varinteger;
	long varlong;
	long long varlonglong;
	float varfloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(varcharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(varinteger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(varlong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(varlonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(varfloat));

	return (0);
}
