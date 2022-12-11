#include <stdio.h>

/**
 * main - the beginning of the program
 * return: always return (0) success
 *
 * This function prints the size of variable types
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu bytes(s)\n", sizeof(d));
	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu bytes\n", sizeof(b));
	printf("Size of a long long int: bytes(s)\n", sizeof(c));
	printf("Size of a float: byte(s)\n", sizeof(f));

	return (0);
}
